#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n <= 1) { // Base Case
        cout << "Alice";
    }
    // Lets consider maybe n>=3 odd and even cases
    else if ((n-1) % 2 == 1) {
        cout << "Bob";
    }
    
    else {
        cout << "Alice";
    }
}
