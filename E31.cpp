//Name: PURVA THAKARE
//Class: 2nd Year 
//Division: SE COMP-2
//Batch: R BATCH
//Clg PRN: F24122003


//----------------------PROBLEM STATEMENT--------------------------
// A double-ended queue (deque) is a linear list in which
// additions and deletions may be made at either end. Obtain a data representation mapping a
// deque into a one- dimensional array. Write C++ program to simulate deque with functions to
// add and delete elements from either end of the deque.

#include <iostream>
using namespace std;
#define MAX 10 // Maximum size of the deque
class Deque {
private:
 int arr[MAX]; // Array to store the deque elements
 int front; // Index of the front end
 int rear; // Index of the rear end
 int size; // Size of the deque
public:
 // Constructor to initialize the deque
 Deque() {
 front = -1;
 rear = 0;
 size = 0;
 }
 // Function to check if deque is full
 bool isFull() {
 return size == MAX;
 }
 // Function to check if deque is empty
 bool isEmpty() {
 return size == 0;
 }
 // Function to insert element at the front end
 void insertFront(int key) {
 if (isFull()) {
 cout << "Deque is full. Cannot insert at front." << endl;
 return;
 }
 if (front == -1) { // First element being inserted
 front = rear = 0;
 } else if (front == 0) { // Circularly wrap around
 front = MAX - 1;
 } else {
 front = front - 1;
 }
 arr[front] = key;
 size++;
 cout << "Inserted " << key << " at front." << endl;
 }
 // Function to insert element at the rear end
 void insertRear(int key) {
 if (isFull()) {
 cout << "Deque is full. Cannot insert at rear." << endl;
 return;
 }
 if (front == -1) { // First element being inserted
 front = rear = 0;
 } else if (rear == MAX - 1) { // Circularly wrap around
 rear = 0;
 } else {
 rear = rear + 1;
 }
 arr[rear] = key;
 size++;
 cout << "Inserted " << key << " at rear." << endl;
 }
 // Function to delete element from the front end
 void deleteFront() {
 if (isEmpty()) {
 cout << "Deque is empty. Cannot delete from front." << endl;
 return;
 }
 cout << "Deleted " << arr[front] << " from front." << endl;
 if (front == rear) { // Only one element was present
 front = rear = -1;
 } else if (front == MAX - 1) { // Circularly wrap around
 front = 0;
 } else {
 front = front + 1;
 }
 size--;
 }
 // Function to delete element from the rear end
 void deleteRear() {
 if (isEmpty()) {
 cout << "Deque is empty. Cannot delete from rear." << endl;
 return;
 }
 cout << "Deleted " << arr[rear] << " from rear." << endl;
 if (front == rear) { // Only one element was present
 front = rear = -1;
 } else if (rear == 0) { // Circularly wrap around
 rear = MAX - 1;
 } else {
 rear = rear - 1;
 }
 size--;
 }
 // Function to get the front element
 int getFront() {
 if (isEmpty()) {
 cout << "Deque is empty." << endl;
 return -1;
 }
 return arr[front];
 }
 // Function to get the rear element
 int getRear() {
 if (isEmpty()) {
 cout << "Deque is empty." << endl;
 return -1;
 }
 return arr[rear];
 }
};
int main() {
 Deque dq;
 // Menu-driven program for deque operations
 int choice, value;
 do {
 cout << "\nDouble-Ended Queue (Deque) Operations\n";
 cout << "1. Insert at Front\n";
 cout << "2. Insert at Rear\n";
 cout << "3. Delete from Front\n";
 cout << "4. Delete from Rear\n";
 cout << "5. Get Front Element\n";
 cout << "6. Get Rear Element\n";
 cout << "7. Exit\n";
 cout << "Enter your choice: ";
 cin >> choice;
 switch (choice) {
 case 1:
 cout << "Enter value to insert at front: ";
 cin >> value;
 dq.insertFront(value);
 break;
 case 2:
 cout << "Enter value to insert at rear: ";
 cin >> value;
 dq.insertRear(value);
 break;
 case 3:
 dq.deleteFront();
 break;
 case 4:
 dq.deleteRear();
 break;
 case 5:
 cout << "Front element: " << dq.getFront() << endl;
 break;
 case 6:
 cout << "Rear element: " << dq.getRear() << endl;
 break;
 case 7:
 cout << "Exiting..." << endl;
 break;
 default:
 cout << "Invalid choice, please try again." << endl;
 }
 } while (choice != 7);
 return 0;
}


//------------------------------OUTPUT-----------------------------

// Double-Ended Queue (Deque) Operations
// 1. Insert at Front
// 2. Insert at Rear
// 3. Delete from Front
// 4. Delete from Rear
// 5. Get Front Element
// 6. Get Rear Element
// 7. Exit
// Enter your choice: 1
// Enter value to insert at front: 10
// Inserted 10 at front.
// Double-Ended Queue (Deque) Operations
// 1. Insert at Front
// 2. Insert at Rear
// 3. Delete from Front
// 4. Delete from Rear
// 5. Get Front Element
// 6. Get Rear Element
// 7. Exit
// Enter your choice: 2
// Enter value to insert at rear: 20
// Inserted 20 at rear.
// Double-Ended Queue (Deque) Operations
// 1. Insert at Front
// 2. Insert at Rear
// 3. Delete from Front
// 4. Delete from Rear
// 5. Get Front Element
// 6. Get Rear Element
// 7. Exit
// Enter your choice: 3
// Deleted 10 from front.
// Double-Ended Queue (Deque) Operations
// 1. Insert at Front
// 2. Insert at Rear
// 3. Delete from Front
// 4. Delete from Rear
// 5. Get Front Element
// 6. Get Rear Element
// 7. Exit
// Enter your choice: 6
// Rear element: 20
