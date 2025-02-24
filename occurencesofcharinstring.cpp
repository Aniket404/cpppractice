#include <iostream>
#include <string>
using namespace std;

// Function to count occurrences of a given character in the string
int countOccurrences(const string &s, char target) {
    int count = 0;  // Variable to store the count of occurrences

    // Traverse through the string
    for (int i = 0; i < s.length(); i++) {
        // If the current character matches the target character, increment count
        if (s[i] == target) {
            count++;
        }
    }

    return count;
}

int main() {
    string input;
    char target;

    // Take user input for the string and the character to count
    cout << "Enter a string: ";
    cin >> input;
    cout << "Enter the character to count: ";
    cin >> target;

    // Count the occurrences of the target character in the string
    int result = countOccurrences(input, target);

    // Display the result
    cout << "The character '" << target << "' appears " << result << " times in the string." << endl;

    return 0;
}
