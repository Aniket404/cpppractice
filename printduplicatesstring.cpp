#include <iostream>
#include <unordered_map>

using namespace std;

void printDuplicateCharacters(const string &str) {
    unordered_map<char, int> charCount; // Hash table to store character frequencies

    // Step 1: Count the occurrences of each character
    for (char ch : str) {
        charCount[ch]++;
    }

    cout << "Duplicate characters: ";
    bool found = false;

    // Step 2: Print characters that appear more than once
    for (const auto &pair : charCount) {
        if (pair.second > 1) {
            cout << pair.first << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "None"; // If no duplicate characters are found
    }

    cout << endl;
}

int main() {
    string input;

    // Step 3: Take user input
    cout << "Enter a string: ";
    cin >> input;

    // Step 4: Call the function to print duplicate characters
    printDuplicateCharacters(input);

    return 0;
}
