#include <iostream>
#include <string>
using namespace std;

// Function to expand around the center and find the longest palindrome
string expandAroundCenter(const string &s, int left, int right) {
    // Expand as long as we are within bounds and characters are the same
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }

    // Return the longest palindrome substring found
    return s.substr(left + 1, right - left - 1);
}

// Function to find the longest palindromic substring
string longestPalindrome(const string &s) {
    if (s.length() < 1) {
        return "";
    }

    string longest = "";

    // Step 1: Try to expand around every character
    for (int i = 0; i < s.length(); i++) {
        // Odd-length palindromes (single character center)
        string oddPalindrome = expandAroundCenter(s, i, i);
        // Even-length palindromes (two character center)
        string evenPalindrome = expandAroundCenter(s, i, i + 1);

        // Step 2: Update the longest palindrome if necessary
        if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }

    return longest;
}

int main() {
    string input;

    // Step 3: Take user input
    cout << "Enter a string: ";
    cin >> input;

    // Step 4: Find and print the longest palindromic substring
    string result = longestPalindrome(input);

    cout << "The longest palindromic substring is: " << result << endl;

    return 0;
}
