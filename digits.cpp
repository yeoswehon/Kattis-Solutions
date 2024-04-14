#include <bits/stdc++.h>
using namespace std;

int getMinimum(int i, string number){

    stringstream ss;
    int digits = number.size();

    ss<< digits;

    if(ss.str() == number)
        return i;

    return getMinimum(++i, ss.str());
}

int main(){

    string input;
    int answer;

    while(cin>>input){
        if(input == "END")
            break;

        answer = getMinimum(1, input);
        printf("%d\n", answer);
    }

    return 0;
}
// Adapted from https://fabhodev.wordpress.com/2018/05/03/11687-digits-uva-solution/ as the solution is well written. Author of this solution is Fabian Calsina. 
