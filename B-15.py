#Name: PURVA THAKARE
#Class: 2nd Year 
#Division: SE COMP-2
#Batch: R BATCH
#Clg PRN: F24122003


#--------------------PROBLEM STATEMENT--------------------------
# Write a python program to store second year percentage
# of students in array. Write function for sorting array of floating point numbers in ascending
# order using
# a) Insertion sort
# b) Shell Sort and display top five scores




# Function for Insertion Sort
def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

# Function for Shell Sort
def shell_sort(arr):
    n = len(arr)
    gap = n // 2  # Initial gap size
    while gap > 0:
        for i in range(gap, n):
            temp = arr[i]
            j = i
            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j -= gap
            arr[j] = temp
        gap //= 2  # Reduce the gap
    return arr

# Function to display top 5 scores
def display_top_five(arr):
    print("Top 5 Scores:")
    # Sort the array in descending order to get top 5 scores
    top_scores = sorted(arr, reverse=True)[:5]
    for score in top_scores:
        print(score)

# Main function
def main():
    # Sample array of student percentages
    percentages = [78.5, 85.3, 91.2, 66.8, 88.4, 75.6, 92.7, 81.5, 95.6, 89.9]
    
    print("Original Percentages:", percentages)
    
    # Sorting using Insertion Sort
    sorted_by_insertion = insertion_sort(percentages.copy())
    print("\nPercentages sorted by Insertion Sort (Ascending):", sorted_by_insertion)
    display_top_five(sorted_by_insertion)
    
    # Sorting using Shell Sort
    sorted_by_shell = shell_sort(percentages.copy())
    print("\nPercentages sorted by Shell Sort (Ascending):", sorted_by_shell)
    display_top_five(sorted_by_shell)

# Call the main function
main()


#-------------------------OUTPUT-----------------------

# Original Percentages: [78.5, 85.3, 91.2, 66.8, 88.4, 75.6, 92.7, 81.5, 95.6, 89.9]
# Percentages sorted by Insertion Sort (Ascending): [66.8, 75.6, 78.5, 81.5, 85.3, 88.4, 89.9, 
# 91.2, 92.7, 95.6]
# Top 5 Scores:
# 95.6
# 92.7
# 91.2
# 89.9
# 88.4
# Percentages sorted by Shell Sort (Ascending): [66.8, 75.6, 78.5, 81.5, 85.3, 88.4, 89.9, 91.2, 
# 92.7, 95.6]
# Top 5 Scores:
# 95.6
# 92.7
# 91.2
# 89.9
# 88.4