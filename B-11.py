#Name: PURVA THAKARE
#Class: 2nd Year 
#Division: SE COMP-2
#Batch: R BATCH
#Clg PRN: F24122003


#--------------------PROBLEM STATEMENT--------------------------
# a) Write a Python program to store roll numbers of student in array who attended training
# program in random order. Write function for searching whether particular student
# attended training program or not, using Linear search and Sentinel search.

# b) Write a Python program to store roll numbers of student array who attended training
# program in sorted order. Write function for searching whether particular student attended
# training program or not, using Binary search and Fibonacci search






            #*****************Part a*****************

# Function to perform Linear Search
def linear_search(arr, n, key):
    for i in range(n):
        if arr[i] == key:
            return i  # Return the index if key is found
    return -1  # Return -1 if key is not found

# Function to perform Sentinel Search
def sentinel_search(arr, n, key):
    # Place the key as the sentinel (temporarily at the end)
    last = arr[n-1]
    arr[n-1] = key
    i = 0

    # Linear search without boundary checks
    while arr[i] != key:
        i += 1

    # Restore the last element of the array
    arr[n-1] = last

    # If found within the array bounds, return index
    if i < n-1 or arr[n-1] == key:
        return i
    return -1

# Main function for Part (a)
def main_part_a():
    # Roll numbers of students who attended the training program (random order)
    roll_numbers = [105, 110, 102, 115, 120, 108]
    n = len(roll_numbers)
    
    print("Roll Numbers of students who attended the training program:", roll_numbers)
    
    key = int(input("Enter the roll number to search: "))
    
    # Perform Linear Search
    result = linear_search(roll_numbers, n, key)
    if result != -1:
        print(f"Linear Search: Roll number {key} attended the training program at index {result}.")
    else:
        print(f"Linear Search: Roll number {key} did not attend the training program.")
    
    # Perform Sentinel Search
    result = sentinel_search(roll_numbers, n, key)
    if result != -1:
        print(f"Sentinel Search: Roll number {key} attended the training program at index {result}.")
    else:
        print(f"Sentinel Search: Roll number {key} did not attend the training program.")

# Call the function for Part (a)
main_part_a()



            #***********************Part b****************************

# Function to perform Binary Search
def binary_search(arr, key):
    low = 0
    high = len(arr) - 1
    
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == key:
            return mid  # Return the index if key is found
        elif arr[mid] < key:
            low = mid + 1
        else:
            high = mid - 1
    return -1  # Return -1 if key is not found

# Function to perform Fibonacci Search
def fibonacci_search(arr, key):
    n = len(arr)
    # Initialize fibonacci numbers
    fib_m2 = 0  # (m-2)'th Fibonacci number
    fib_m1 = 1  # (m-1)'th Fibonacci number
    fib_m = fib_m2 + fib_m1  # m'th Fibonacci number

    # fib_m will store the smallest Fibonacci number greater than or equal to n
    while fib_m < n:
        fib_m2 = fib_m1
        fib_m1 = fib_m
        fib_m = fib_m2 + fib_m1

    # Marks the eliminated range from front
    offset = -1

    # While there are elements to be inspected
    while fib_m > 1:
        # Check if fib_m2 is a valid index
        i = min(offset + fib_m2, n - 1)

        if arr[i] < key:
            fib_m = fib_m1
            fib_m1 = fib_m2
            fib_m2 = fib_m - fib_m1
            offset = i
        elif arr[i] > key:
            fib_m = fib_m2
            fib_m1 = fib_m1 - fib_m2
            fib_m2 = fib_m - fib_m1
        else:
            return i  # Key found
    # Compare the last element
    if fib_m1 and arr[offset + 1] == key:
        return offset + 1
    return -1  # Key not found

# Main function for Part (b)
def main_part_b():
    # Roll numbers of students who attended the training program (sorted order)
    roll_numbers = [102, 105, 108, 110, 115, 120]
    
    print("Roll Numbers of students who attended the training program (sorted):", roll_numbers)
    
    key = int(input("Enter the roll number to search: "))
    
    # Perform Binary Search
    result = binary_search(roll_numbers, key)
    if result != -1:
        print(f"Binary Search: Roll number {key} attended the training program at index {result}.")
    else:
        print(f"Binary Search: Roll number {key} did not attend the training program.")
    
    # Perform Fibonacci Search
    result = fibonacci_search(roll_numbers, key)
    if result != -1:
        print(f"Fibonacci Search: Roll number {key} attended the training program at index {result}.")
    else:
        print(f"Fibonacci Search: Roll number {key} did not attend the training program.")

# Call the function for Part (b)
main_part_b()


#--------------------------OUTPUT--------------------------

            # *********************a.**********************

# Roll Numbers of students who attended the training program: [105, 110, 102, 115, 
# 120, 108]
# Enter the roll number to search: 120
# Linear Search: Roll number 120 attended the training program at index 4.
# Sentinel Search: Roll number 120 attended the training program at index 4.


            # *********************b.**********************
# Roll Numbers of students who attended the training program (sorted): [102, 105, 
# 108, 110, 115, 120]
# Enter the roll number to search: 23
# Binary Search: Roll number 23 did not attend the training program.
# Fibonacci Search: Roll number 23 did not attend the training program
