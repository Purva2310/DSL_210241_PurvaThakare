#Name: PURVA THAKARE
#Class: 2nd Year 
#Division: SE COMP-2
#Batch: R BATCH
#Clg PRN: F24122003


#--------------------PROBLEM STATEMENT--------------------------
# Write a Python program to store marks scored in subject
# “Fundamental of Data Structure” by N students in the class. Write functions to compute
# following:
# a) The average score of class
# b) Highest score and lowest score of class
# c) Count of students who were absent for the test
# d) Display mark with highest frequency


def students_marks(n):
    global count
    for i in range (n):
        m=input(f"Enter marks for student {i+1} (Enter 'A' if absent): ")
        if m.upper()=='A':
            count=count+1
            pass
        else:
            marks.append(int(m))
    print("Marks of present students: ",marks)

def avg():
    # for mark in marks:
    #     sum= sum+mark
    average=sum(marks)/len(marks)
    print()
    print("a)The average score of class")
    print(f"Average:{average:.2f}")

def highest_lowest():
    high=max(marks)
    low= min(marks)
    print()
    print("b)Highest score and lowest score of class")
    print("Highest score:",high)
    print("Lowest score:",low)

def absent_count():
    print()
    print("c)Count of the students who were absent for the test")
    print("Number of students absent for the test:",count)

def frequency():
    print()
    print("d)Display mark with highest frequency")
    freq={}
    for mark in marks:
        if mark in freq:
            freq[mark]+=1
        else:
            freq[mark]=1

    frequency= max(freq.values())

    most_frequent_marks=[]
    for mark, freq in freq.items():
        if freq== frequency:
            most_frequent_marks.append(mark)

    print(most_frequent_marks,"obtained by ",frequency," students")   



n=int(input("Enter number of students in the class:"))
marks=[]
count=0
students_marks(n)
avg()
highest_lowest()
absent_count()
frequency()


#------------------------------OUTPUT--------------------------------

# Enter number of students in the class:5
# Enter marks for student 1 (Enter 'A' if absent): 100
# Enter marks for student 2 (Enter 'A' if absent): 96
# Enter marks for student 3 (Enter 'A' if absent): 87
# Enter marks for student 4 (Enter 'A' if absent): A
# Enter marks for student 5 (Enter 'A' if absent): 78
# Marks of present students:  [100, 96, 87, 78]

# a)The average score of class
# Average:90.25

# b)Highest score and lowest score of class
# Highest score: 100
# Lowest score: 78

# c)Count of the students who were absent for the test
# Number of students absent for the test: 1

# d)Display mark with highest frequency
# [100, 96, 87, 78] obtained by  1  students