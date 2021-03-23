#pragma once

struct Node {
    int value;
    int current_min;
    Node* next;

    Node(int value, int current_min);
};

class Stack {
public:
    Stack();
    ~Stack();
    bool empty() const;
    void push(int x);
    void pop();
    int top() const;
    int min() const;

private:
    Node* begin_;
};
