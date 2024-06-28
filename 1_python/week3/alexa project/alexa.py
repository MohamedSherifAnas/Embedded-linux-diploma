import speech_recognition as sr
import pyttsx3
import nltk
#import playsound
import random
import threading
import webbrowser

# Initialize speech recognizer
recognizer = sr.Recognizer()
engine = pyttsx3.init()

# Function to speak
def speak(text):
    engine.say(text)
    engine.runAndWait()

# Function to recognize audio
def recognize_audio():
        with sr.Microphone() as source:
            print("Listening...")
            recognizer.adjust_for_ambient_noise(source)
            audio = recognizer.listen(source)
            return audio    

# Function to recognize speech
def recognize_speech(audio):    
        try:
            print("Recognizing...")
            #text = recognizer.recognize_google(audio, language="ar-EG")
            text = recognizer.recognize_google(audio)
            print(f"You said: {text}")
            return text
        except sr.UnknownValueError:
            print("Could not understand audio")
        except sr.RequestError as e:
            print(f"Error recognizing speech; {e}")

def search_words_in_string(word_list,text):
     #find word from word_list in the string
     found_words=[word for word in word_list if word in text]
     return len(found_words)!=0
     
                 

# Example usage
if __name__ == "__main__":
    speak("Hello! How can I assist you today?")
    while True:
        command = recognize_speech(recognize_audio())

#quick info       
        if "stop" in command:
            speak("Goodbye!")
            break
        elif "hello" in command:
            speak("Hi there!")
        elif "Google" in command:
            webbrowser.open("https://www.google.com/")
        elif "Gmail" in command:
            webbrowser.open("https://mail.google.com/")
        elif search_words_in_string(["اهلا","مرحبا"],command):
             speak("صباح الفل يا معلم")            
        else:
            speak("Sorry, I didn't catch that. Can you repeat?")


              
