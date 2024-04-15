#include <bits/stdc++.h>
using namespace std;

int main(){
    string n,m;
    cin >> n >> m;
    while (n.back() == '0' && m.back() == '0'){
        n.pop_back();
        m.pop_back();
    }
    
    int n_length = n.length();
    int m_length = m.length();
    int decimal_point = 1 + n_length - m_length;
    
    if (decimal_point == n_length) {
        cout << n << endl;
        return 0;
    }
    
    else if ((n_length - m_length) <0) {
        cout << "0.";
        for (int i = 0; i < (m_length - n_length -1); i++){
            cout << "0";
        }
        cout << n << endl;
        return 0;
    }
    
    else {
        for (int i =0; i < decimal_point;i++){
            cout << n[i];
        }
        if (decimal_point != 1) {
            cout << ".";
        }
        for (int i=decimal_point; i < n_length ; i++) {
            cout << n[i];
        }
        return 0;
    }
    
}
