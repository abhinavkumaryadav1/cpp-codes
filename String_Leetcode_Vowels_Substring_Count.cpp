/*2063. Vowels of All Substrings

Given a string word, return the sum of the number of vowels ('a', 'e', 'i', 'o', and 'u') in every substring of word.

A substring is a contiguous (non-empty) sequence of characters within a string.

Note: Due to the large constraints, the answer may not fit in a signed 32-bit integer. Please be careful during the calculations.

Example 1:

Input: word = "aba"
Output: 6
Explanation: 
All possible substrings are: "a", "ab", "aba", "b", "ba", and "a".
- "b" has 0 vowels in it
- "a", "ab", "ba", and "a" have 1 vowel each
- "aba" has 2 vowels in it
Hence, the total sum of vowels = 0 + 1 + 1 + 1 + 1 + 2 = 6. 
Example 2:

Input: word = "abc"
Output: 3
Explanation: 
All possible substrings are: "a", "ab", "abc", "b", "bc", and "c".
- "a", "ab", and "abc" have 1 vowel each
- "b", "bc", and "c" have 0 vowels each
Hence, the total sum of vowels = 1 + 1 + 1 + 0 + 0 + 0 = 3.
Example 3:

Input: word = "ltcd"
Output: 0
Explanation: There are no vowels in any substring of "ltcd".
 

Constraints:

1 <= word.length <= 105
word consists of lowercase English letters.*/

//Interview Question NBMC:

class Solution {
public:
    long long countVowels(string word) {
        long long ans = 0;
        int size = word.size();
        
        //brute force O(N^3) worse
        /* for (int j = 0; j < size; j++) {
            for (int i = j; i < size; i++) {
                for (int k = j; k <= i; k++) {
                    if (word[k] == 'a' || word[k] == 'e' || word[k] == 'i' ||
                        word[k] == 'o' || word[k] == 'u') {
                        ans++;
                    }
                }
            }
        } */

        //Optimal O(N):

        for(int i =0 ; i<size ; i++)
        {
          if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
                        word[i] == 'o' || word[i] == 'u') {

                        ans+= (long long) (i+1)*(size-i);
                    }
        }
    
    return ans;

    }
};