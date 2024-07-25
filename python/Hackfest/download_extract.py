import requests
from bs4 import BeautifulSoup
import json

def get_medical_terms():
    url = 'https://medlineplus.gov/ency/article/002207.htm'
    response = requests.get(url)
    soup = BeautifulSoup(response.content, 'html.parser')
    
    # Assuming terms are in list items on the webpage
    terms = [term.get_text() for term in soup.find_all('li')]
    return set(term.lower() for term in terms)

def save_terms_to_file(terms, filename='medical_terms.json'):
    with open(filename, 'w') as file:
        json.dump(list(terms), file)

if __name__ == "__main__":
    medical_terms = get_medical_terms()
    save_terms_to_file(medical_terms)
    print(f"Extracted and saved {len(medical_terms)} medical terms to 'medical_terms.json'")
