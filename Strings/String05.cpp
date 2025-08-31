//Number of 1 bit

#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n) {
            n &= (n - 1); // removes the lowest set bit
            count++;
        }
        return count;
    }
};

int main() {
    Solution s;
    cout << s.hammingWeight(11) << endl;        // Output: 3
    cout << s.hammingWeight(128) << endl;       // Output: 1
    cout << s.hammingWeight(2147483645) << endl; // Output: 30
    return 0;
}
