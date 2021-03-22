#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <utility>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

struct Node {
    int value;
    Node* next;

    Node(int value = 0) : value(value), next(nullptr) {}
};

class Stack {
public:
    Stack() : begin_(nullptr) {}

    ~Stack() {
        Node* p = begin_;
        while (p != nullptr) {
            Node* next_p = p->next;
            p = next_p;
        }
    }

    bool empty() const {
        return begin_ == nullptr;
    }

    void push(int x) {
        Node* new_node = new Node(x);
        new_node->next = begin_;
        begin_ = new_node;

    }

    void pop() {
        Node* p = begin_;
        begin_ = begin_->next;

        delete p;
    }

    int top() const {
        return begin_->value;
    }

private:
    Node* begin_;

};

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Stack st;

    int n;
    int op;

    Stack st_min;
    st_min.push(100001);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> op;
        if (op == 0) {
            int value;
            cin >> value;
            st.push(value);
            if (st.top() < st_min.top()) {
                st_min.push(value);
            }
            else {
                st_min.push(st_min.top());
            }
        }

        else if (op == 1) {
            st.pop();
            st_min.pop();
        }

        else if (op == 2) {
            cout << st.top() << endl;
        }

        else if (op == 3) {
            cout << st_min.top() << endl;
        }
    }

    return 0;
}
