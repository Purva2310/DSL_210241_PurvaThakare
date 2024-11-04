//Name: PURVA THAKARE
//Class: 2nd Year 
//Division: SE COMP-2
//Batch: R BATCH
//Clg PRN: F24122003


//----------------------PROBLEM STATEMENT--------------------------
// Department of Computer Engineering has student's club named
// 'pinnacle club’. Students of second, third and final year of department can be granted
// membership on request. Similarly on may cancel the membership of club .First node is reserved
// for the president of the club and last node is reserved for the secretary of club .write C++
// program to maintain club members information using singly linked list .store student PRN and
// Name .Write function to:
// a) Add and Delete the members as well as the president or even secretary.
// b) Compute total numbers of members of club.
// c) Display members.
// d) Display list in reverse order using recursion.
// e) Two linked lists exists for two divisions .Concatenate two lists.


#include <iostream>
#include <string>
using namespace std;
// Node structure
struct Node {
 string name;
 long prn;
 Node* next;
};
// Singly Linked List class
class PinnacleClub {
private:
 Node* head;
public:
 PinnacleClub() {
 head = nullptr;
 }
 // Function to add member (president, secretary, or regular member)
 void addMember(string name, long prn, string position = "member") {
 Node* newNode = new Node();
 newNode->name = name;
 newNode->prn = prn;
 newNode->next = nullptr;
 if (head == nullptr) {
 head = newNode;
 cout << position << " " << name << " added as the first member." << endl;
 return;
 }
 if (position == "president") {
 newNode->next = head;
 head = newNode;
 cout << name << " added as president." << endl;
 } else if (position == "secretary") {
 Node* temp = head;
 while (temp->next != nullptr) {
 temp = temp->next;
 }
 temp->next = newNode;
 cout << name << " added as secretary." << endl;
 } else {
 Node* temp = head;
 while (temp->next != nullptr && temp->next->next != nullptr) {
 temp = temp->next;
 }
 newNode->next = temp->next;
 temp->next = newNode;
 cout << name << " added as member." << endl;
 }
 }
 // Function to delete member (president, secretary, or regular member)
 void deleteMember(long prn, string position = "member") {
 if (head == nullptr) {
 cout << "No members in the list." << endl;
 return;
 }
 Node* temp = head;
 Node* prev = nullptr;
 // Deleting president
 if (position == "president") {
 head = head->next;
 delete temp;
 cout << "President removed." << endl;
 return;
 }
 // Deleting regular member or secretary
 while (temp != nullptr && temp->prn != prn) {
 prev = temp;
 temp = temp->next;
 }
 if (temp == nullptr) {
 cout << "Member not found." << endl;
 return;
 }
 prev->next = temp->next;
 delete temp;
 cout << "Member removed." << endl;
 }
 // Function to count the total number of members
 int countMembers() {
 Node* temp = head;
 int count = 0;
 while (temp != nullptr) {
 count++;
 temp = temp->next;
 }
 return count;
 }
 // Function to display the list of members
 void displayMembers() {
 if (head == nullptr) {
 cout << "No members in the list." << endl;
 return;
 }
 Node* temp = head;
 while (temp != nullptr) {
 cout << "PRN: " << temp->prn << ", Name: " << temp->name << endl;
 temp = temp->next;
 }
 }
 // Function to display members in reverse order using recursion
 void displayReverse(Node* node) {
 if (node == nullptr) {
 return;
 }
 displayReverse(node->next);
 cout << "PRN: " << node->prn << ", Name: " << node->name << endl;
 }
 void displayReverse() {
 if (head == nullptr) {
 cout << "No members in the list." << endl;
 return;
 }
 displayReverse(head);
 }
 // Function to concatenate two lists
 void concatenate(PinnacleClub& club2) {
 if (head == nullptr) {
 head = club2.head;
 return;
 }
 Node* temp = head;
 while (temp->next != nullptr) {
 temp = temp->next;
 }
 temp->next = club2.head;
 club2.head = nullptr;
 }
};
int main() {
 PinnacleClub club1, club2;
 // Add members to the first club
 club1.addMember("Alice", 101, "president");
 club1.addMember("Bob", 102, "member");
 club1.addMember("Charlie", 103, "secretary");
 // Display members
 cout << "\nMembers of Club 1:" << endl;
 club1.displayMembers();
 // Count total members
 cout << "\nTotal members in Club 1: " << club1.countMembers() << endl;
 // Display members in reverse order
 cout << "\nMembers of Club 1 in reverse order:" << endl;
 club1.displayReverse();
 // Add members to the second club
 club2.addMember("David", 201, "president");
 club2.addMember("Eve", 202, "member");
 club2.addMember("Frank", 203, "secretary");
 // Concatenate club1 and club2
 club1.concatenate(club2);
 // Display members after concatenation
 cout << "\nMembers after concatenating Club 1 and Club 2:" << endl;
 club1.displayMembers();
 return 0;
}



//--------------------------OUTPUT----------------------------

// President Alice added as the first member.
// Bob added as member.
// Charlie added as secretary.
// Members of Club 1:
// PRN: 101, Name: Alice
// PRN: 102, Name: Bob
// PRN: 103, Name: Charlie
// Total members in Club 1: 3
// Members of Club 1 in reverse order:
// PRN: 103, Name: Charlie
// PRN: 102, Name: Bob
// PRN: 101, Name: Alice
// president David added as the first member.
// Eve added as member.
// Frank added as secretary.
// Members after concatenating Club 1 and Club 2:
// PRN: 101, Name: Alice
// PRN: 102, Name: Bob
// PRN: 103, Name: Charlie
// PRN: 201, Name: David
// PRN: 202, Name: Eve
// PRN: 203, Name: Frank