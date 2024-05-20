#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    vector<int> temp;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        temp.push_back(a);
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (temp[j] > temp[j + 1]) {
                int placeholder = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = placeholder;
                for (int k = 0; k < 5; k++) {
                    cout << temp[k] << " ";
                    }
                    cout << endl;
            }
        }
    }
    return 0;
}
