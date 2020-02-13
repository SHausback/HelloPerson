# -*- coding: utf-8 -*-
"""
Created on Wed Feb 12 11:09:44 2020

@author: skyle
"""

# This is a class declaration in Python. It will allow us to create objects called person
class person:
    # This is the initializer function. It is called automatically when a person object is created.
    # The values after the equals signs are default values that will fill in data not provided.
    #Every member function must have self as the first thing in the list of function parameters.
    def __init__(self, title = "Mr.", firstName = "John", lastName = "Doe", age = 42):
        self.title = title
        self.firstName = firstName
        self.lastName = lastName
        self.age = age
        
    # This method will great the person by their first name
    def greetInformal(self):
        print("Hello,", self.firstName, "\b!")
        
    # This method will greet the person by their title and last name
    def greetFormal(self):
        print("Hello,", self.title, self.lastName, "\b!")
        
    # This method will tell you the person's age
    def howOld(self):
        print(self.firstName, "is", self.age, "years old!")
        
    # This method will tell the person happy birthday and increase their age by 1
    def birthday(self):
         self.age = self.age + 1
         print("Happy Birthday,", self.firstName, "\b! You are now", self.age, "years old!")
         
# Get some input from the user about who they are.
title = input("What is your title?: ")
firstName = input("What is your first name?: ")
lastName = input("What is your last name?: ")
age = input("How old are you?: ")

# Create the class object
you = person(title, firstName, lastName, int(age))

#Call the class member functions on the object we just created
you.greetInformal()
you.greetFormal()
you.howOld()
you.birthday()
you.howOld()

# Test what happens if we try to change data members directly
you.age = you.age -1
you.howOld()    