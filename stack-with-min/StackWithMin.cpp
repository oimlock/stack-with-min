#include "StackWithMin.h"

Node::Node(int value) : value(value), next(nullptr) {}

Stack::Stack() : begin_(nullptr) {}

Stack::~Stack() {
    Node* p = begin_;
    while (p != nullptr) {
        Node* next_p = p->next;
        p = next_p;
    }
}

bool Stack::empty() const {
    return begin_ == nullptr;
}

void Stack::push(int x) {
    Node* new_node = new Node(x);
    new_node->next = begin_;
    begin_ = new_node;
}

void Stack::pop() {
    Node* p = begin_;
    begin_ = begin_->next;

    delete p;
}

int Stack::top() const {
    return begin_->value;
}

