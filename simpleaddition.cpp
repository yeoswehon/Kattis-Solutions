#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int chartodigit(char a) {
    return a - '0';
}

char digittochar(int a) {
    return a + '0';
}

string addition_two_integers(string a, string b) {
    if (a.length() > b.length()) {
        swap(a, b); 
    }
    string result = "";
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;

    for (int i = 0; i < a.length(); i++) {
        int d1 = chartodigit(a[i]);
        int d2 = chartodigit(b[i]);
        int sum = d1 + d2 + carry;
        int output_digit = sum % 10; 
        carry = sum / 10;
        result.push_back(digittochar(output_digit));
    }

    for (int i = a.length(); i < b.length(); i++) {
        int d1 = chartodigit(b[i]);
        int sum = carry + d1;
        int output_digit = sum % 10;
        carry = sum / 10;
        result.push_back(digittochar(output_digit));
    }

    if (carry) result.push_back('1');
    reverse(result.begin(), result.end());
    return result;
}

int main(){
    string a,b;
    cin >> a >> b;
    string ans = addition_two_integers(a,b);
    for (auto c: ans) {
        cout << c;
    }
    return 0;
}
