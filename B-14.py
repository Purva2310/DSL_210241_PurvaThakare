#Name: PURVA THAKARE
#Class: 2nd Year 
#Division: SE COMP-2
#Batch: R BATCH
#Clg PRN: F24122003


#--------------------PROBLEM STATEMENT--------------------------
# Write a Python program to store first year percentage of
# students in array. Write function for sorting array of floating point numbers in ascending
# order using
# a)Selection Sort
# b)Bubble sort and display top five scores

def selection(arr):
    n=len(arr)
    for i in range(n):
        min_index=i
        for j in range(i+1,n):
            if arr[j]<arr[min_index]:
                min_index=j

        arr[i], arr[min_index]= arr[min_index],arr[i]
    return arr

def bubble(arr):
    n=len(arr)
    for i in range(n-1):
        for j in range(0,n-i-1):
            if arr[j]>arr[j+1]:
                arr[j], arr[j+1]= arr[j+1], arr[j]

    return arr

def display_top_five(arr):
    top_scores= sorted(arr, reverse=True)[:5]
    print("Top 5 scores are:")
    for score in top_scores:
        print(score)

print()

percentage=[90.15, 91.56,88.90,99.40,90.34,93.18,85.75,95.65,80.80,81.23]

print("Sorting using selection sort:")
sel=selection(percentage.copy())
print(sel)

print()

print("Sorting using bubble sort:")
bubble= bubble(percentage.copy())
print(bubble)

print()

display_top_five(percentage)



#------------------------OUTPUT---------------------------

# Sorting using selection sort:
# [80.8, 81.23, 85.75, 88.9, 90.15, 90.34, 91.56, 93.18, 95.65, 99.4]

# Sorting using bubble sort:
# [80.8, 81.23, 85.75, 88.9, 90.15, 90.34, 91.56, 93.18, 95.65, 99.4]

# Top 5 scores are:
# 99.4
# 95.65
# 93.18
# 91.56
# 90.34