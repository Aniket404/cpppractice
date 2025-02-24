#include <iostream>
#include <string>
using namespace std;

// Function to check if two strings are anagrams in O(n) time
bool areAnagrams(string str1, string str2) {
    // If the lengths are not the same, they can't be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Create an array to count characters (assuming only lowercase English letters)
    int count[256] = {0};  // Array to store frequency of each character

    // Count frequency of each character in the first string
    for (int i = 0; i < str1.length(); i++) {
        count[str1[i]]++;  // Increment count for character in str1
    }

    // Decrease frequency for each character in the second string
    for (int i = 0; i < str2.length(); i++) {
        count[str2[i]]--;  // Decrement count for character in str2
        // If any character's count becomes negative, they are not anagrams
        if (count[str2[i]] < 0) {
            return false;
        }
    }

    // If all counts are zero, then the strings are anagrams
    return true;
}

int main() {
    string str1, str2;

    // Take input for two strings
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    // Check if the strings are anagrams and output the result
    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
