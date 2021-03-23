#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "StackWithMin.h"

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Stack st;

    int n;
    int op;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> op;
        if (op == 0) {
            int value;
            cin >> value;
            st.push(value);
        }

        else if (op == 1) {
            st.pop();
        }

        else if (op == 2) {
            cout << st.top() << endl;
        }

        else if (op == 3) {
            cout << st.min() << endl;
        }
    }

    return 0;
}
