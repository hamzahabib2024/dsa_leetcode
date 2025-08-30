// Valid Palindrome

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(const string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                // Try skipping either left or right character
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.validPalindrome("aba") << endl;   // true
    cout << sol.validPalindrome("abca") << endl;  // true
    cout << sol.validPalindrome("abc") << endl;   // false
    return 0;
}
