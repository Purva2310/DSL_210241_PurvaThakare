//Name: PURVA THAKARE
//Class: 2nd Year 
//Division: SE COMP-2
//Batch: R BATCH
//Clg PRN: F24122003


//--------------------PROBLEM STATEMENT--------------------------
// Read Marks of ‘N’ Students for the subject Data
// Structures. Sort the data and display the topper for the Subject.

#include <iostream>
using namespace std;
// Function to merge two halves
void merge(int marks[], int left, int middle, int right)
{
 int n1 = middle - left + 1; // Size of left subarray
 int n2 = right - middle; // Size of right subarray
 // Create temporary arrays
 int L[n1], R[n2];
 // Copy data to temporary arrays
 for (int i = 0; i < n1; i++)
 L[i] = marks[left + i];
 for (int j = 0; j < n2; j++)
 R[j] = marks[middle + 1 + j];
 // Merge the temporary arrays back into marks[]
 int i = 0, j = 0, k = left;
 while (i < n1 && j < n2) {
 if (L[i] <= R[j]) {
 marks[k] = L[i];
 i++;
 } else {
 marks[k] = R[j];
 j++;
 }
 k++;
 }
 // Copy the remaining elements of L[], if any
 while (i < n1) {
 marks[k] = L[i];
 i++;
 k++;
 }
 // Copy the remaining elements of R[], if any
 while (j < n2) {
 marks[k] = R[j];
 j++;
 k++;
 }
}
// Function to implement Merge Sort
void mergeSort(int marks[], int left, int right) {
 if (left < right) {
 int middle = left + (right - left) / 2;
 // Recursively sort first and second halves
 mergeSort(marks, left, middle);
 mergeSort(marks, middle + 1, right);
 // Merge the sorted halves
 merge(marks, left, middle, right);
 }
}
//Main Function
int main() {
 int N;
 // Input the number of students
 cout << "Enter the number of students: ";
 cin >> N;
 int marks[N];
 // Input the marks of students
 cout << "Enter the marks of " << N << " students:\n";
 for (int i = 0; i < N; i++) {
 cout << "Marks[" << i + 1 << "]: ";
 cin >> marks[i];
 }
 // Call mergeSort function
 mergeSort(marks, 0, N - 1);
 // Display sorted marks
 cout << "Sorted Marks:\n";
 for (int i = 0; i < N; i++) {
 cout << marks[i] << " ";
 }
 cout << endl;
 // Display the topper's marks (last element in sorted array)
 cout << "Topper's Marks: " << marks[N - 1] << endl;
 return 0;
}

//---------------------Output--------------------------
// Enter the number of students: 5
// Enter the marks of 5 students:
// Marks[1]: 10
// Marks[2]: 15
// Marks[3]: 18
// Marks[4]: 19
// Marks[5]: 12
// Sorted Marks:
// 10 12 15 18 19
// Topper's Marks: 19
