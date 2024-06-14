#This program to check whether the passed letter is vowel or not

def checkVowel(char):
    VOWELS ={'a','e','i','o','u','A','E','I','O','U'}
    if char in VOWELS:
        print("the character '{char}' is a vowel")
    else:
        print("the character '{char}' is a consonant")


checkVowel(input('please enter a char'))
