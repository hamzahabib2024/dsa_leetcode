// implement the queue using stack

#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> inStack, outStack;

    //it will transfer only when outStack is empty
    void transferIfNeeded() {
        if (outStack.empty()) {
            while (!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

public:
    MyQueue() {}

    void push(int x) {
        inStack.push(x); 
    }

    int pop() {
        transferIfNeeded();
        int val = outStack.top();
        outStack.pop();
        return val;
    }

    int peek() {
        transferIfNeeded();
        return outStack.top();
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};

int main() {
    MyQueue q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front element: " << q.peek() << endl; // 1
    cout << "Popped: " << q.pop() << endl;         // 1
    cout << "Popped: " << q.pop() << endl;         // 2

    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // No

    cout << "Front element: " << q.peek() << endl; // 3
    cout << "Popped: " << q.pop() << endl;         // 3

    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Yes

    return 0;
}
