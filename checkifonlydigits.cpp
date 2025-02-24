#include <iostream>
#include <string>
using namespace std;

// Function to check if the string contains only digits
bool isOnlyDigits(const string &s) {
    // Step 1: Traverse through each character in the string
    for (int i = 0; i < s.length(); i++) {
        // Step 2: Check if the current character is a digit (between '0' and '9')
        if (s[i] < '0' || s[i] > '9') {
            return false;  // Return false if any non-digit is found
        }
    }

    // Step 3: If all characters are digits, return true
    return true;
}

int main() {
    string input;

    // Step 4: Take user input
    cout << "Enter a string: ";
    cin >> input;

    // Step 5: Check and display whether the string contains only digits
    if (isOnlyDigits(input)) {
        cout << "True - The string contains only digits." << endl;
    } else {
        cout << "False - The string does not contain only digits." << endl;
    }

    return 0;
}
