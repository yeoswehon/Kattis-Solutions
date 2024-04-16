#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int number_of_socks = 2*n;
    stack<int> st;
    stack<int> aux;
    int sock;
    int number_of_moves = 0;
    
    for (int i = 0; i < number_of_socks; i++) {
        cin >> sock;
        st.push(sock);
    }
    
    while (!st.empty()) {
        if (aux.empty() || aux.top() != st.top()) {
            aux.push(st.top());
            st.pop();
            number_of_moves++;
        } else {
            aux.pop();
            st.pop();
            number_of_moves++;
        }
    }
    
    if (!aux.empty()) {
        cout << "impossible";
    } else {
        cout << number_of_moves;
    }
    return 0;
}
