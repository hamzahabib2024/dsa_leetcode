// SquareRoot 

#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x; // 0 -> 0, 1 -> 1
        
        long long left = 1, right = x / 2, ans = 0;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long sq = mid * mid;
            
            if (sq == x) return mid;
            if (sq < x) {
                ans = mid;       // mid is a possible answer
                left = mid + 1;  // try for bigger
            } else {
                right = mid - 1; // try smaller
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    cout << s.mySqrt(4) << endl;  // Output: 2
    cout << s.mySqrt(8) << endl;  // Output: 2
}
