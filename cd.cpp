#include <bits/stdc++.h>
using namespace std;

int main() {
    long N, M;
    
    while (cin >> N >> M && (N || M)) {
        unordered_set<int> jack;
        int common_cd = 0;
        int input;

        while (N--) {
            cin >> input;
            jack.insert(input);
        }
        
        while (M--) {
            cin >> input;
            if (jack.find(input) != jack.end()) {
                common_cd++;
            }
        }

        cout << common_cd << endl;
    }

    return 0;
}
