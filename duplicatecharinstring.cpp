#include <iostream>
#include <string>
#include <unordered_set> // For storing seen characters
using namespace std;

// Function to find and print duplicate characters in a string
void findDuplicates(const string &s) {
    unordered_set<char> seen;  // To track characters we've already seen
    unordered_set<char> duplicates;  // To track characters that are duplicates

    // Step 1: Traverse through the string
    for (int i = 0; i < s.length(); i++) {
        // Step 2: Check if the character has already been seen
        if (seen.find(s[i]) != seen.end()) {
            // If found in the seen set, it's a duplicate, add to duplicates set
            duplicates.insert(s[i]);
        } else {
            // Otherwise, add the character to the seen set
            seen.insert(s[i]);
        }
    }

    // Step 3: Display the duplicate characters
    if (!duplicates.empty()) {
        cout << "Duplicate characters found: ";
        for (auto ch : duplicates) {
            cout << ch << " ";
        }
        cout << endl;
    } else {
        cout << "No duplicate characters found." << endl;
    }
}

int main() {
    string input;

    // Step 4: Take user input
    cout << "Enter a string: ";
    cin >> input;

    // Step 5: Call function to find duplicate characters
    findDuplicates(input);

    return 0;
}
