#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n;
    cin >>n;
    for (int i =1; i <= n; i++){
        cout << "Case #" << (i) << ": ";
        int snappers, finger;
        cin >> snappers >> finger;
        
        bool light_on = (finger % int(pow(2, snappers)) == (int(pow(2, snappers)) - 1));
        string status = light_on ? "ON" : "OFF";
        cout << status<<endl;
        
    }
}
