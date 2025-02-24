#include <iostream>
using namespace std;

int stringToInteger(const string &str) {
    int num = 0; // To store the final integer value
    int sign = 1; // To handle negative numbers
    int i = 0;

    // Step 1: Check if the string starts with a negative sign
    if (str[0] == '-') {
        sign = -1;
        i = 1; // Start processing from index 1
    }

    // Step 2: Traverse through the string and convert each character
    for (; i < str.length(); i++) {
        // Step 3: Check if the character is a valid digit
        if (str[i] < '0' || str[i] > '9') {
            cout << "Invalid input! The string contains non-numeric characters." << endl;
            return 0;
        }
        
        // Step 4: Convert character to integer and update `num`
        num = num * 10 + (str[i] - '0'); 
    }

    return num * sign; // Apply the sign and return the integer
}

int main() {
    string input;
    
    // Step 5: Take user input
    cout << "Enter a numeric string: ";
    cin >> input;
    
    // Step 6: Convert string to integer and print
    int result = stringToInteger(input);
    cout << "Integer representation: " << result << endl;
    
    return 0;
}
