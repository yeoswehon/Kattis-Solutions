#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (scanf("%d", &n) == 1) {
        bool flag = true;
        int array[n] = {0};
        int difference[n] = {0};

        for (int i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }

        if (n > 1) {
            for (int j = 0; j < n - 1; j++) {
                int abs_diff = abs(array[j] - array[j + 1]);
                if (abs_diff <= n - 1) {
                    difference[abs_diff]++;
                }
            }
        }

        for (int k = 1; k < n; k++) {
            if (difference[k] != 1) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }

    return 0;
}
