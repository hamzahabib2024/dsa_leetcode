//Counting bits

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            ans[i] = ans[i >> 1] + (i & 1);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n; 
    vector<int> result = sol.countBits(n);

    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
