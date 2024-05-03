#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> ht;
    unordered_map<int, string> htfind;
    string input;

    while (cin >> input) {
        if (input == "def") {
            string name;
            int number;
            cin >> name >> number;
            if (ht.find(name) != ht.end()){
                int old = ht[name];
                ht.erase(name);
                htfind.erase(old);
            }
            ht[name] = number;
            htfind[number] = name;
        } else if (input == "calc") {
            string expression, temp;
            int sum = 0;
            int sign = 1;
            string ans = "";
            char c;

            getline(cin, expression);
            istringstream iss(expression.substr(1));
            while (iss >> temp) {
                if (ht.find(temp) == ht.end()) {
                    ans = "unknown";
                    break;
                } else {
                    sum += sign * ht[temp];
                }

                iss >> c;
                if (c == '+') {
                    sign = 1;
                } else if (c == '-') {
                    sign = -1;
                } else {
                    if (htfind.find(sum) == htfind.end()) {
                        ans = "unknown";
                    } else {
                        ans = htfind[sum];
                    }
                    break;
                }
            }
            cout << (expression.substr(1)) << " " << ans << endl;
        } else if (input == "clear") {
            ht.clear();
            htfind.clear();
        }
    }

    return 0;
}
