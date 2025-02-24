#include <iostream>
#include <unordered_map>
using namespace std;

char firstNonRepeatedCharacter(const string &str) {
    unordered_map<char, int> charCount; // Hash map to store character frequencies

    // Step 1: Count occurrences of each character
    for (char ch : str) {
        charCount[ch]++;
    }

    // Step 2: Traverse the string and find the first character with count 1
    for (char ch : str) {
        if (charCount[ch] == 1) {
            return ch; // Return the first non-repeated character
        }
    }

    // Step 3: If no non-repeated character found, return a special character
    return '\0'; // '\0' represents no such character found
}

int main() {
    string input;

    // Step 4: Take user input
    cout << "Enter a string: ";
    cin >> input;

    // Step 5: Find and print the first non-repeated character
    char result = firstNonRepeatedCharacter(input);

    if (result != '\0') {
        cout << "The first non-repeated character is: " << result << endl;
    } else {
        cout << "No non-repeated character found." << endl;
    }

    return 0;
}
