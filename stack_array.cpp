#include <bits/stdc++.h>
using namespace std;

class Stack {
    int *a;
    int top;
    int cap;

public:
    Stack(int n) {
        cap = n;
        a = new int[cap];
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == cap - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        a[top] = x;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack Empty\n";
            return -1;
        }
        return a[top];
    }

    int size() {
        return top + 1;
    }
};

int main() {
    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.peek() << "\n";
    st.pop();
    cout << st.peek() << "\n";

    return 0;
}
