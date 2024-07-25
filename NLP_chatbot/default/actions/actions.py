# This files contains your custom actions which can be used to run
# custom Python code.
#
# See this guide on how to implement these action:
# https://rasa.com/docs/rasa/custom-actions


# This is a simple example for a custom action which utters "Hello World!"

# from typing import Any, Text, Dict, List
#
# from rasa_sdk import Action, Tracker
# from rasa_sdk.executor import CollectingDispatcher
#
#
# class ActionHelloWorld(Action):
#
#     def name(self) -> Text:
#         return "action_hello_world"
#
#     def run(self, dispatcher: CollectingDispatcher,
#             tracker: Tracker,
#             domain: Dict[Text, Any]) -> List[Dict[Text, Any]]:
#
#         dispatcher.utter_message(text="Hello World!")
#
#         return []

from typing import Any, Text, Dict, List
from rasa_sdk import Action, Tracker
from rasa_sdk.executor import CollectingDispatcher
import yaml

class ActionProvideDiseaseInfo(Action):

    def name(self) -> Text:
        return "action_provide_disease_info"

    def load_disease_data(self):
        with open('disease_data.yml', 'r') as file:
            return yaml.safe_load(file)

    def match_symptoms(self, symptoms, disease_data):
        matched_diseases = []
        for disease in disease_data['diseases']:
            if all(symptom in disease['symptoms'] for symptom in symptoms):
                matched_diseases.append(disease)
        return matched_diseases

    def run(self, dispatcher: CollectingDispatcher,
            tracker: Tracker,
            domain: Dict[Text, Any]) -> List[Dict[Text, Any]]:

        # Extract symptoms from user input
        symptoms = [entity['value'] for entity in tracker.latest_message['entities'] if entity['entity'] == 'symptom']
        
        # Load disease data
        disease_data = self.load_disease_data()

        # Match symptoms with diseases
        matched_diseases = self.match_symptoms(symptoms, disease_data)

        # Create response
        if matched_diseases:
            disease = matched_diseases[0]['name']
            medications = ', '.join(matched_diseases[0]['medications'])
            dispatcher.utter_message(template="utter_disease_info", disease=disease, medications=medications)
        else:
            dispatcher.utter_message(template="utter_no_match")

        return []
