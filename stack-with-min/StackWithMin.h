#pragma once

namespace oimlock {

struct Node {
    int value;
    Node* next;

    Node(int value = 0);
};

class Stack {
public:
    Stack();
    ~Stack();
    bool empty() const;
    void push(int x);
    void pop();
    int top() const;

private:
    Node* begin_;
};

}  // namespace oimlock
