//Removing Stars From a String

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        string result;  // we'll use this as a stack
        for(char c : s) {
            if(c == '*') {
                if(!result.empty()) result.pop_back();  // remove last char
            } else {
                result.push_back(c);  // push character
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    string s1 = "leet**cod*e";
    string s2 = "erase*****";
    
    cout << sol.removeStars(s1) << endl;  // Output: "lecoe"
    cout << sol.removeStars(s2) << endl;  // Output: ""
    
    return 0;
}
