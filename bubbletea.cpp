#include <bits/stdc++.h>
#include <cstdio>
#include <climits>

using namespace std;

int main(){
    long min = LONG_MAX;
    int n;
    cin >> n;
    vector <long> tea;
    while (n--){
        long price_tea;
        cin >> price_tea;
        tea.push_back(price_tea); //Dynamic array of prices of bubble tea
    }
    int m;
    cin >> m;
    vector <long> topping;
    while (m--){
        long price_topping;
        cin >> price_topping;
        topping.push_back(price_topping); //Dynamic array of prices of toppings
    }
    for (int i =0; i < tea.size(); i++) {
        int n =0;
        cin >> n;
        while (n--){
            int topping_value = 0;
            scanf("%d",&topping_value); //Playing around with the c function haha since I'm a c coder
            if ((tea[i]+topping[topping_value-1] < min)) {
                min = tea[i] + topping[topping_value-1];
            }
        }
    }
    long money;
    cin >> money; // Amount of money, divide by cheapest combination and -1. 
    const int student = (money/min)-1 <=0? 0:(money/min)-1;
    cout << student;
}
