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
