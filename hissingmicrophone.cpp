#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int length_of_string = s.length();
    int difference = 's' - 'a';
    string ishiss = "no hiss";
    for (int i =0; i < length_of_string; i++){
        if (((s[i]-'a') == difference) && ((s[i+1]-'a') == difference)){
            ishiss= "hiss";
            break;
        }
    }
    
    cout << ishiss;
}
