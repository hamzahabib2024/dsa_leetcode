// valid parentheses

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> match = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        
        for (char c : s) {
            // If it's a closing bracket
            if (match.count(c)) {
                if (st.empty() || st.top() != match[c])
                    return false;
                st.pop();
            }
            else { // Opening bracket
                st.push(c);
            }
        }
        
        return st.empty();
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;
    cout << (sol.isValid(s) ? "true" : "false") << endl;
    return 0;
}
