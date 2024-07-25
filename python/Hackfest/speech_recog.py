# import speech_recognition as sr 
# import pyttsx3 

# r = sr.Recognizer()

# def speakText(command):
#     engine = pyttsx3.init()
#     engine.say(command)
#     engine.runAndWait()

# while (1):
#     try:
#         with sr.Microphone() as source2:
#             r.adjust_for_ambient_noise(source2, duration=1)
#             audio2 = r.listen(source2)
#             myText = r.recognize_google(audio2)
#             myText = myText.lower()
#             print("text: ", myText)
#             speakText(myText)
#     except sr.RequestError as e:
#         print("Could not request results; {0}".format(e))
         
#     except sr.UnknownValueError:
#         print("unknown error occurred")

import speech_recognition as sr
import pyttsx3

def speakText(command):
    engine = pyttsx3.init()
    engine.say(command)
    engine.runAndWait()

def recognize_from_audio_file(file_path):
    r = sr.Recognizer()
    try:
        with sr.AudioFile(file_path) as source:
            # Adjust for ambient noise and record audio from the file
            r.adjust_for_ambient_noise(source)
            audio = r.record(source)

            # Recognize speech using Google Web Speech API
            myText = r.recognize_google(audio)
            myText = myText.lower()
            print("text: ", myText)
            speakText(myText)
    except sr.RequestError as e:
        print("Could not request results; {0}".format(e))
    except sr.UnknownValueError:
        print("unknown error occurred")

# Path to your audio file
audio_file_path = 'C:/Users/Admin/Downloads/sample_audio/harvard.wav'

# Recognize speech from the audio file
recognize_from_audio_file(audio_file_path)