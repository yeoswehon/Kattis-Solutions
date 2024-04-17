#include <bits/stdc++.h>
using namespace std;

int main() {
    int numerator,denominator;
    while (scanf("%d %d",&numerator,&denominator) == 2){
        if (numerator == 0 && denominator == 0) {
            break;
        }
        int number = 0;
        int new_numerator = 0;
        number = numerator / denominator;
        new_numerator = numerator % denominator;
        cout << number << " " << new_numerator << " / " << denominator << endl;
        
    }
}
