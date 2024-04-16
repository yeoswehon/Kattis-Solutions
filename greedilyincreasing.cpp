#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,previous,current;
    cin >> n >> previous;
    int length = 1;
    int array[n];
    if (n==1){
        cout << length << endl << previous;
        return 0;
    }
    array[0]= previous;
    for (int i=1; i < n; i++){
        cin >> current;
        
        if (current > previous) {
            array[length] = current;
            length++;
            previous = current;
        }
    }
    cout << length << endl;
    for (int i=0; i< length;i++) {
        cout << array[i];
        if (i < (length -1)){
            cout << ' ';
        }
    }
}
