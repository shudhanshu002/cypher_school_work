/*
Ques 1. Given an infix expression in the form of string str. Convert this infix expression to postfix expression.

Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
Note: The order of precedence is: ^ greater than * equals to / greater than + equals to -. Ignore the right associativity of ^. Input: str = "a+b*(c^d-e)^(f+g*h)-i"
Output: abcd^e-fgh*+^*+i-
Explanation:
After converting the infix expression
into postfix expression, the resultant
expression will be abcd^e-fgh*+^*+i- . Note :- Take all the required value from user.
*/

#include <iostream>
#include <stack>  // For stack
#include <string> // For string
using namespace std;

// Function to determine the precedence of operators
int precedence(char op) {
    if (op == '^') return 3; // Highest precedence
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0; // No precedence
}

// Function to convert infix expression to postfix
string infixToPostfix(const string& infix) {
    stack<char> operators; // Stack to hold operators
    string postfix;        // Output string for postfix expression

    for (char ch : infix) {
        // If the character is an operand, add it to the output
        if (isalnum(ch)) {
            postfix += ch;
        } 
        // If the character is '(', push it to the stack
        else if (ch == '(') {
            operators.push(ch);
        } 
        // If the character is ')', pop and output from the stack until an '(' is encountered
        else if (ch == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop(); // Remove the '(' from the stack
        } 
        // If the character is an operator
        else {
            while (!operators.empty() && precedence(operators.top()) >= precedence(ch)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(ch); // Push the current operator to the stack
        }
    }

    // Pop all the remaining operators from the stack
    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

int main() {
    string infix;

    // Take input from the user
    cout << "Enter an infix expression: ";
    cin >> infix;

    // Convert infix to postfix
    string postfix = infixToPostfix(infix);

    // Output the postfix expression
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
