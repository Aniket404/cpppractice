#include <iostream>
#include <string>
using namespace std;

void reverseWords(string& sentence) {
    int n = sentence.length();

    // Step 1: Split sentence into words and store them
    string words[n];  // Array to store words
    int wordIndex = 0;
    int i = 0;

    // Traverse the string to extract words
    for (int j = 0; j <= n; ++j) {
        if (j == n || sentence[j] == ' ') {
            // If a space or end of the string is reached, store the word
            words[wordIndex] = sentence.substr(i, j - i);
            wordIndex++;
            i = j + 1; // Move past the space
        }
    }

    // Step 2: Reverse the order of words in the array
    string reversedSentence = "";
    for (int k = wordIndex - 1; k >= 0; --k) {
        reversedSentence += words[k]; 
        if (k > 0) reversedSentence += " ";  // Add space between words
    }

    // Step 3: Update the original sentence with the reversed sentence
    sentence = reversedSentence;
}

int main() {
    string sentence;
    
    // Take input for the sentence
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Reverse the words in the sentence
    reverseWords(sentence);

    // Output the reversed sentence
    cout << "Reversed sentence: " << sentence << endl;

    return 0;
}
