#include <bits/stdc++.h>
using namespace std;

int main(){
    int winner = 1;
    int sum = 0;
    for (int i =0; i < 5;i++){
        int n;
        int temp =0;
        for (int i=0;i<4;i++){
            cin>>n;
            temp +=n;
        }
        winner = sum < temp ? (i+1) : winner;
        sum = sum < temp ? temp : sum;
    }
    cout << winner << " " << sum;
}
