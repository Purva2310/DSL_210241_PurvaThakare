#Name: PURVA THAKARE
#Class: 2nd Year 
#Division: SE COMP-2
#Batch: R BATCH
#Clg PRN: F24122003


#--------------------PROBLEM STATEMENT--------------------------
# Write a Python program to compute following operations
# on String:
# a) To display word with the longest length
# b) To determines the frequency of occurrence of particular character in the string
# c) To check whether given string is palindrome or not
# d) To display index of first appearance of the substring
# e) To count the occurrences of each word in a given string



def longest_word(str):
    print()
    word=str.split()
    print("1.Longest word from the string is: ",max(word, key=len))

def frequency(str):
    print()
    char=input("2.Enter the char the frequency of which u want to find...")
    print(f"Frequency of {char} is:",str.count(char))
    print()

def palindrome():
    str=input("3.Enter a string you want to check palindrome or not...")
    rev=str[::-1]
    if str == rev:
        print("String is Palindrome")
    else:
        print("String is not Palindrome")

def substring(string):
    print()
    substr=input("4.Enter the substring you want to find...")
    print(string.find(substr))
    print()

def occurances(string):
    words=string.split()
    frequency={}
    print("5.Count the occurances of each word in a given string...")
    for word in words:
        frequency[word]=frequency.get(word,0)+1
    print(frequency)


string= "Hello Everyone!!! Welcome to Python"
longest_word(string)
frequency(string)
palindrome()
substring(string)
occurances(string)


#---------------------------------OUTPUT---------------------------------

# 1.Longest word from the string is:  Everyone!!!

# 2.Enter the char the frequency of which u want to find...e
# Frequency of e is: 5

# 3.Enter a string you want to check palindrome or not...one
# String is not Palindrome

# 4.Enter the substring you want to find...one
# 11

# 5.Count the occurances of each word in a given string...
# {'Hello': 1, 'Everyone!!!': 1, 'Welcome': 1, 'to': 1, 'Python': 1}