#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void push(int x) {
        Node* t = new Node();
        t->data = x;
        t->next = top;
        top = t;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* t = top;
        top = top->next;
        delete t;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack Empty\n";
            return -1;
        }
        return top->data;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.peek() << "\n";
    st.pop();
    cout << st.peek() << "\n";

    return 0;
}
