#include "StackWithMin.h"
#include <utility>

namespace oimlock {

Node::Node(int value, int current_min) : value(value), current_min(current_min), next(nullptr) {}

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
    int current_min = x;
    if (begin_ != nullptr) {
        current_min = std::min(current_min, begin_->current_min);
    }
    Node* new_node = new Node(x, current_min);
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

int Stack::min() const {
    return begin_->current_min;
}

}  // namespace oimlock
