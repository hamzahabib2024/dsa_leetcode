//Maximum area of longest diagonal rectangle

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagSq = -1, maxArea = -1;
        
        for (auto &rect : dimensions) {
            int l = rect[0], w = rect[1];
            int diagSq = l * l + w * w;   // diagonal squared
            int area = l * w;
            
            if (diagSq > maxDiagSq) {
                maxDiagSq = diagSq;
                maxArea = area;
            } else if (diagSq == maxDiagSq) {
                maxArea = max(maxArea, area);
            }
        }
        
        return maxArea;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> dimensions1 = {{9,3},{8,6}};
    vector<vector<int>> dimensions2 = {{3,4},{4,3}};
    
    cout << sol.areaOfMaxDiagonal(dimensions1) << endl; 
    cout << sol.areaOfMaxDiagonal(dimensions2) << endl; 
    
    return 0;
}
