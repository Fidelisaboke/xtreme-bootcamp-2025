/* Anagrams in Cpp
* Reference material: https://www.geeksforgeeks.org/dsa/check-whether-two-strings-are-anagram-of-each-other/
* Anagrams: a word, phrase, or name formed by rearranging the letters of another, such as spar, 
formed from rasp (Oxford Languages).
*/
#include <algorithm> // for the sort() function
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


bool areAnagrams(string s1, string s2, string approach) {
    // Check if the lengths are the same first
    if (s1.length() != s2.length()) return false;
    
    // APPROACHES
    if(approach == "naive") {
        /* Naive Approach (using Sorting) */
        // Sort both strings 
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        // Compare the sorted strings
        return (s1 == s2);
    } else if (approach == "hash-map") {
        /* Using a hash map - Count the frequency of each character */
        unordered_map<char, int> charCount;

        // Frequency of each character in s1
        for(char ch: s1) {
            charCount[ch] += 1; // Increment
        }

        // Frequency of each character in s2
        for(char ch: s2) {
            charCount[ch] -= 1; // Decrement
        }

        // Check if all frequencies are zero
        for(auto& pair : charCount) {
            if(pair.second != 0) {
                return false;
            }
        }

        return true;
    } else if (approach == "freq-array") {
        /* Using a frequency array of size 26 (26 letters of the English alphabet) */
        vector<int> freq(26, 0);

        // Count the frequency of each character in s1
        for(char ch: s1) {
            freq[ch - 'a']++; // Increment
        }

        // Count the frequency of each character in s2
        for(char ch: s2) {
            freq[ch - 'a']--; // Decrement
        }

        // Check if all counts are zero 
        for(int count: freq) {
            if(count != 0) {
                return false;
            }
        }

        return true;
    }
}


int main() {
    string s1 = "listen";
    string s2 = "silent";

    // Check if s1 and s2 are anagrams
    if(areAnagrams(s1, s2, "naive")) {
        cout << s1 << " and " << s2 << " are anagrams!" << endl;
    } else {
        cout << s1 << " and " << s2 << " are NOT anagrams!" << endl;
    }

    return 0;
}