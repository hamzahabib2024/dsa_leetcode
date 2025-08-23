// implement stack using queue

#include <bits/stdc++.h>
using namespace std;

class MyStack {
private:
    queue<int> q1, q2;  
public:
    MyStack() {}

    void push(int x) {
        q2.push(x);  // Step 1: push x into q2
        // Step 2: move all elements from q1 to q2
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        // Step 3: swap q1 and q2
        swap(q1, q2);
    }

    int pop() {
        int topElement = q1.front();
        q1.pop();
        return topElement;
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    MyStack myStack;
    myStack.push(1);
    myStack.push(2);
    cout << myStack.top() << endl;   //  2
    cout << myStack.pop() << endl;   // 2
    cout << (myStack.empty() ? "true" : "false") << endl; // false
    return 0;
}
