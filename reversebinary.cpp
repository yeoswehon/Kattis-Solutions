#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <deque>
using namespace std;

int main() {
    long n;
    cin >> n;
    deque<int> binary;
    int count = 0,sum =0;

    do {
        binary.push_back(n%2);
        n /= 2;
        count++;
    } while (n > 0);
    
    while (count > 0) {
        sum += pow(2, count - 1)*binary.front();
        binary.pop_front();
        count--;
    }
    
    cout << sum;

    return 0;
}
