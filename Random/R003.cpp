//counting the climbing stairs
#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n; // Base cases

        int first = 1, second = 2, ways;
        for (int i = 3; i <= n; i++) {
            ways = first + second;
            first = second;
            second = ways;
        }
        return second;
    }
};

int main() {
    int n;
    cout << "Enter number of steps: ";
    cin >> n;

    Solution obj;
    cout << "Number of distinct ways: " << obj.climbStairs(n) << endl;

    return 0;
}
