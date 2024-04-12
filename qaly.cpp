#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    float ans;
    while (n--){
        float q,y;
        cin >> q >> y;
        ans += q*y;
    }
    cout << ans;
    return 0;
}
