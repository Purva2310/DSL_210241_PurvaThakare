#Name: PURVA THAKARE
#Class: 2nd Year 
#Division: SE COMP-2
#Batch: R BATCH
#Clg PRN: F24122003


#--------------------PROBLEM STATEMENT--------------------------
# In second year computer engineering class, group A
# student’s play cricket, group B students play badminton and group C students play football.
# Write a Python program using functions to compute following: -
# a) List of students who play both cricket and badminton
# b) List of students who play either cricket or badminton but not both
# c) Number of students who play neither cricket nor badminton
# d) Number of students who play cricket and football but not badminton.
# (Note- While realizing the group, duplicate entries should be avoided, do not use SET built-in
# functions)



# Function to remove duplicates from a list
def remove_duplicates(lst):
    unique_lst = []
    for student in lst:
        if student not in unique_lst:
            unique_lst.append(student)
    return unique_lst

# Function to find intersection (students who play both sports)
def intersection(lst1, lst2):
    inter_lst = []
    for student in lst1:
        if student in lst2:
            inter_lst.append(student)
    return inter_lst

# Function to find students who play either cricket or badminton but not both
def symmetric_difference(lst1, lst2):
    diff_lst = []
    for student in lst1:
        if student not in lst2:
            diff_lst.append(student)
    for student in lst2:
        if student not in lst1:
            diff_lst.append(student)
    return diff_lst

# Function to find students who play neither cricket nor badminton
def neither(lst1, lst2, all_students):
    neither_lst = []
    for student in all_students:
        if student not in lst1 and student not in lst2:
            neither_lst.append(student)
    return neither_lst

# Function to find students who play cricket and football but not badminton
def cricket_football_not_badminton(lst_cricket, lst_football, lst_badminton):
    cf_not_b_lst = []
    for student in lst_cricket:
        if student in lst_football and student not in lst_badminton:
            cf_not_b_lst.append(student)
    return cf_not_b_lst

# Main function
def main():
    all_students = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K']  # List of all students
    cricket = ['A', 'B', 'C', 'D', 'E']  # Students who play cricket
    badminton = ['C', 'D', 'F', 'G']  # Students who play badminton
    football = ['A', 'D', 'H', 'I']  # Students who play football
    
    # Remove duplicates
    cricket = remove_duplicates(cricket)
    badminton = remove_duplicates(badminton)
    football = remove_duplicates(football)

    # a) List of students who play both cricket and badminton
    both_cricket_badminton = intersection(cricket, badminton)
    print("Students who play both cricket and badminton:", both_cricket_badminton)

    # b) List of students who play either cricket or badminton but not both
    either_cricket_or_badminton = symmetric_difference(cricket, badminton)
    print("Students who play either cricket or badminton but not both:", either_cricket_or_badminton)

    # c) Number of students who play neither cricket nor badminton
    neither_count = len(neither(cricket, badminton, all_students))
    print("Number of students who play neither cricket nor badminton:", neither_count)

    # d) Number of students who play cricket and football but not badminton
    cricket_football_not_badminton_list = cricket_football_not_badminton(cricket, football, badminton)
    print("Students who play cricket and football but not badminton:", cricket_football_not_badminton_list)

# Run the main function
main()


#---------------------------OUTPUT------------------------
# Students who play both cricket and badminton: ['C', 'D']
# Students who play either cricket or badminton but not both: ['A', 'B', 'E', 'F', 'G']
# Number of students who play neither cricket nor badminton: 4
# Students who play cricket and football but not badminton: ['A']
