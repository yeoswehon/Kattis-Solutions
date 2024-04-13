#include <bits/stdc++.h>

int get_score(int a, int b) {
    if (a > b){
        std::swap(a,b);
    }
    if (b == 2 && a == 1) {
        return 12345;
    }
    else if (b==a) {
        return b*100;
    }
    return b*10 + a;
    
}
int main() {
    int a,b,c,d;
    while (std::cin >> a >> b >> c >> d && a !=0 && b !=0) {
        int player_1,player_2;
        player_1 = get_score(a,b);
        player_2 = get_score(c,d);
        
        if (player_1 > player_2) {
            std::cout << "Player 1 wins." << std::endl;
        }
        
        else if (player_1 == player_2) {
            std::cout << "Tie." << std::endl;
        }
        
        else {
            std::cout << "Player 2 wins." << std::endl;
        }
    }
    return 0;
}
