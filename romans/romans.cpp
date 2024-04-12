#include <bits/stdc++.h>
using namespace std;

int main() {
    float x;
    int ans;
    
    cin >> x;
    
    ans = x * (5280.0 / 4854.0) * 1000.0 + 0.50001;
    cout << ans;
    return 0;
    
}
