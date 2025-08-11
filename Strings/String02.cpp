// find the length of the last word

#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;

        // Step 1: Skip trailing spaces
        while (i >= 0 && s[i] == ' ')
            i--;

        // Step 2: Count characters of last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

int main() 
{
    Solution sol;
    cout << sol.lengthOfLastWord("Hello World") << endl;            // Output: 5
    cout << sol.lengthOfLastWord("   fly me   to   the moon  ") << endl; // Output: 4
    cout << sol.lengthOfLastWord("luffy is still joyboy") << endl;  // Output: 6
}
