#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check if parentheses are balanced
bool isBalanced(const string &s) {
    stack<char> st;  // Stack to keep track of opening parentheses

    // Traverse through the string
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // If character is an opening parenthesis, push it onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        // If character is a closing parenthesis, check for matching opening parenthesis
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) {
                return false;  // Stack is empty, so no matching opening parenthesis
            }
            
            // Pop the top of the stack and check if it matches the closing parenthesis
            char top = st.top();
            st.pop();

            // Check if the closing parenthesis matches the corresponding opening parenthesis
            if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    // If stack is empty at the end, all parentheses are balanced
    return st.empty();
}

int main() {
    string input;

    // Take user input
    cout << "Enter a string with parentheses: ";
    cin >> input;

    // Check if the string has balanced parentheses
    if (isBalanced(input)) {
        cout << "The parentheses are balanced!" << endl;
    } else {
        cout << "The parentheses are not balanced!" << endl;
    }

    return 0;
}
