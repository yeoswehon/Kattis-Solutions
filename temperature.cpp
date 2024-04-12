#include <bits/stdc++.h>
using namespace std;

int main() {
    double c, m;
    cin >> c >> m;
    if (c == 0 && m == 1) {
        cout << "ALL GOOD";
        return 0;
    } else if (m==1) {
        cout << "IMPOSSIBLE";
        return 0;
    } else {
        double temperature = c / (1 - m);
        cout << fixed << setprecision(9) << temperature;
        return 0;
    }
}
