import pyttsx3
import datetime
import os
import smtplib

engine = pyttsx3.init('sapi5') #used for intake api voices from windows
voices = engine.getProperty('voices')
print(voices[0].id)
engine.setProperty('voice',voices[0].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()
    pass

def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour >=0 and hour < 12 :
        speak("Good Morning")
        
    elif hour >= 12 and hour < 17 :
        speak("Good Aftenoon")
        
    elif hour >= 17 and hour < 18 :
        speak("Good Evening")
        
    else: 
        speak("Good Night")
        
    speak("How can I help you ")
    

if  __name__  == " __main__ ":
    speak(" Hi I am Nova ")
    
    