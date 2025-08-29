//Reverse words in String III

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = 0;
        
        for (int end = 0; end <= n; end++) {
            if (end == n || s[end] == ' ') {
                // Reverse the word between start and end - 1
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1; // Move to next word
            }
        }
        
        return s;
    }
};

int main() {
    Solution sol;
    string s1 = "Let's take LeetCode contest";
    cout << sol.reverseWords(s1) << endl; // Output: "s'teL ekat edoCteeL tsetnoc"

    string s2 = "Mr Ding";
    cout << sol.reverseWords(s2) << endl; // Output: "rM gniD"

    return 0;
}
