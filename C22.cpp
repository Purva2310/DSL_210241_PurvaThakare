//Name: PURVA THAKARE
//Class: 2nd Year 
//Division: SE COMP-2
//Batch: R BATCH
//Clg PRN: F24122003


//----------------------PROBLEM STATEMENT--------------------------
// Second year Computer Engineering class, set A of students like
// Vanilla ice-cream and set B of students like Butterscotch ice-cream. Write C++ program to
// store two sets using Linked List. Compute and displayi. Set of students who like both vanilla and butterscotch
// ii. Set of students who like either vanilla or butterscotch or not both
// iii. Number of students who like neither vanilla nor butterscotch 

#include <iostream>
using namespace std;
int main() {
 int nVanilla, nButterscotch, totalStudents;
 // Get the number of students who like vanilla and butterscotch
 cout << "Enter the total number of students: ";
 cin >> totalStudents;
 cout << "Enter the number of students who like vanilla ice cream: ";
 cin >> nVanilla;
 int vanillaSet[nVanilla];
 cout << "Enter the roll numbers of students who like vanilla: ";
 for (int i = 0; i < nVanilla; i++) {
 cin >> vanillaSet[i];
 }
 cout << "Enter the number of students who like butterscotch ice cream: ";
 cin >> nButterscotch;
 int butterscotchSet[nButterscotch];
 cout << "Enter the roll numbers of students who like butterscotch: ";
 for (int i = 0; i < nButterscotch; i++) {
 cin >> butterscotchSet[i];
 }
 // 1. Students who like both vanilla and butterscotch
 cout << "Students who like both vanilla and butterscotch: ";
 for (int i = 0; i < nVanilla; i++) {
 for (int j = 0; j < nButterscotch; j++) {
 if (vanillaSet[i] == butterscotchSet[j]) {
 cout << vanillaSet[i] << " ";
 }
 }
 }
 cout << endl;
 // 2. Students who like either vanilla or butterscotch but not both
 cout << "Students who like either vanilla or butterscotch but not both: ";
 for (int i = 0; i < nVanilla; i++) {
 bool found = false;
 for (int j = 0; j < nButterscotch; j++) {
 if (vanillaSet[i] == butterscotchSet[j]) {
 found = true;
 break;
 }
 }
 if (!found) {
 cout << vanillaSet[i] << " ";
 }
 }
 for (int j = 0; j < nButterscotch; j++) {
 bool found = false;
 for (int i = 0; i < nVanilla; i++) {
 if (butterscotchSet[j] == vanillaSet[i]) {
 found = true;
 break;
 }
 }
 if (!found) {
 cout << butterscotchSet[j] << " ";
 }
 }
 cout << endl;
 // 3. Number of students who like neither vanilla nor butterscotch
 int neitherCount = 0;
 for (int i = 1; i <= totalStudents; i++) {
 bool found = false;
 for (int j = 0; j < nVanilla; j++) {
 if (vanillaSet[j] == i) {
 found = true;
 break;
 }
 }
 for (int j = 0; j < nButterscotch; j++) {
 if (butterscotchSet[j] == i) {
 found = true;
 break;
 }
 }
 if (!found) {
 neitherCount++;
 }
 }
 cout << "Number of students who like neither vanilla nor butterscotch: " << neitherCount 
<< endl;
 return 0;
}

//-----------------------------OUTPUT-------------------------------
// Enter the total number of students: 12
// Enter the number of students who like vanilla ice cream: 5
// Enter the roll numbers of students who like vanilla: 1 2 3 4 5 
// Enter the number of students who like butterscotch ice cream: 6
// Enter the roll numbers of students who like butterscotch: 5 6 7 8 9 10
// Students who like both vanilla and butterscotch: 5 
// Students who like either vanilla or butterscotch but not both: 1 2 3 4 6 7 8 9 10 
// Number of students who like neither vanilla nor butterscotch: 2