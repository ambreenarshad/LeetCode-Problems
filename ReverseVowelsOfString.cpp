/* Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.



Example 1:

Input: s = "IceCreAm"

Output : "AceCreIm"

Explanation :

	The vowels in s are['I', 'e', 'e', 'A'].On reversing the vowels, s becomes "AceCreIm".

	Example 2 :

	Input : s = "leetcode"

	Output : "leotcede"



Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters. */

class Solution {
public:
    string reverseVowels(string s) {
        int len = s.length();
        string res = "";
        unordered_set<char> vowels = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
        for (int a = len - 1; a >= 0; a--) {
            if (vowels.count(s[a])) {
                res += s[a];
            }
        }
        int k = 0;
        for (int a = 0; a < len; a++) {
            if (vowels.count(s[a])) {
                s[a] = res[k];
                k++;
            }
        }
        return s;
    }
};