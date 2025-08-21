// Design a stack with increment operation

#include <bits/stdc++.h>
using namespace std;

class CustomStack {
private:
    vector<int> stack;
    vector<int> inc;
    int maxSize;

public:
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if ((int)stack.size() < maxSize) {
            stack.push_back(x);
            inc.push_back(0); //it will maintain same size for lazy increments
        }
    }
    
    int pop() {
        if (stack.empty()) return -1;
        
        int i = stack.size() - 1;
        int res = stack[i] + inc[i];
        
        //it will propagate increment downwards
        if (i > 0) inc[i-1] += inc[i];
        
        stack.pop_back();
        inc.pop_back();
        return res;
    }
    
    void increment(int k, int val) {
        if (!stack.empty()) {
            int idx = min(k, (int)stack.size()) - 1;
            inc[idx] += val;
        }
    }
};

int main() {
    CustomStack stk(3);
    stk.push(1); // [1]
    stk.push(2); // [1,2]
    cout << stk.pop() << endl; // 2
    stk.push(2); // [1,2]
    stk.push(3); // [1,2,3]
    stk.push(4); // ignored
    stk.increment(5, 100); // [101,102,103]
    stk.increment(2, 100); // [201,202,103]
    cout << stk.pop() << endl; // 103
    cout << stk.pop() << endl; // 202
    cout << stk.pop() << endl; // 201
    cout << stk.pop() << endl; // -1
}
