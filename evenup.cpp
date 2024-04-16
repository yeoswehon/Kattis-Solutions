#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    int array[n];
    stack <int> new_stack;
    int min_cards = 0;
    
    for (int i=0; i < n; i++) {
        cin >> array[i];
    }
    for (int i =0; i < n; i ++){
        if (!new_stack.empty() && (array[i]%2 == new_stack.top()%2)) {
            new_stack.pop();
        }
        else {
            new_stack.push(array[i]);
        }
    }
    cout << new_stack.size();
}
