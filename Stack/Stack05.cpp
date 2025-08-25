// Build an Array With Stack Operations

#include <bits/stdc++.h>
using namespace std;

vector<string> buildArray(vector<int>& target, int n) {
    vector<string> result;
    int j = 0; // pointer for target
    
    for (int i = 1; i <= n && j < target.size(); i++) {
        result.push_back("Push");
        if (i == target[j]) {
            j++; // move to next target element
        } else {
            result.push_back("Pop"); // discard unwanted element
        }
    }
    return result;
}

int main() {
    // Example test
    vector<int> target = {1,3};
    int n = 3;

    vector<string> ops = buildArray(target, n);

    cout << "[ ";
    for (int i = 0; i < ops.size(); i++) {
        cout << "\"" << ops[i] << "\"";
        if (i != ops.size() - 1) cout << ", ";
    }
    cout << " ]" << endl;

    return 0;
}
