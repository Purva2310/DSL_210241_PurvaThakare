//Name: PURVA THAKARE
//Class: 2nd Year 
//Division: SE COMP-2
//Batch: R BATCH
//Clg PRN: F24122003


//----------------------PROBLEM STATEMENT--------------------------
// In any language program mostly syntax error occurs due to
// unbalancing delimiter such as (), {}, []. Write C++ program using stack to check whether
// given expression is well parenthesized or not. 


#include<iostream>
#include<stack>
#include<string>
using namespace std;
// Function to check if a character is an opening bracket
bool isOpening(char ch) {
 return ch == '(' || ch == '{' || ch == '[';
}
// Function to check if a character is a closing bracket
bool isClosing(char ch) {
 return ch == ')' || ch == '}' || ch == ']';
}
// Function to check if the pair of opening and closing brackets match
bool isMatchingPair(char opening, char closing) {
 return (opening == '(' && closing == ')') ||
 (opening == '{' && closing == '}') ||
 (opening == '[' && closing == ']');
}
// Function to check if the given expression is well-parenthesized
bool isWellParenthesized(string expr) {
 stack<char> s; // Stack to hold opening brackets
 for (char ch : expr) {
 if (isOpening(ch)) {
 // If it's an opening bracket, push it onto the stack
 s.push(ch);
 }
 else if (isClosing(ch)) {
 // If it's a closing bracket, check if it matches with the top of the stack
 if (s.empty() || !isMatchingPair(s.top(), ch)) {
 return false; // Unmatched closing bracket
 }
 s.pop(); // Pop the matched opening bracket from the stack
 }
 }
 // After processing the expression, check if the stack is empty
 return s.empty(); // If empty, the expression is well-parenthesized
}
int main() {
 string expression;
 cout << "Enter an expression: ";
 cin >> expression;
 if (isWellParenthesized(expression)) {
 cout << "The expression is well-parenthesized." << endl;
 } else {
 cout << "The expression is not well-parenthesized." << endl;
 }
 return 0;
}


//-----------------------OUTPUT------------------------
// Enter an expression: a+b*(a/b)
// The expression is well-parenthesized
