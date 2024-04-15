#include <bits/stdc++.h>
using namespace std;

int main() {
    int r=0; //Number of correct pegs
    int s=0; //Number of correct pegs in wrong position
    int n;
    cin >> n;
    string player_1,player_2;
    cin >> player_1 >> player_2;
    string first,second; //correct
    
    for (int i=0; i <n; i ++) {
        if (player_1[i] == player_2[i]){
            r++; //correct
        }
        else {
            first.push_back(player_1[i]);
            second.push_back(player_2[i]);
        }
    } //correct
    while (!first.empty()){
        int check_index = second.find(first[0]);
        if (check_index != string::npos) {
            s++;
            second.erase(second.begin()+check_index);
        }
        first.erase(first.begin());
    }
    cout << r << " " << s;

}
