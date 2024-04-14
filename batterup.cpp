#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double base=0;;
    double counter=0;
    while (n--){
        double strikes;
        cin >> strikes;
        if (strikes >= 0) {
            base += strikes;
            counter++;
        }
    }
    double percentage = (base / counter);
    cout<< fixed<< setprecision(9) <<percentage;
}
