#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;

    while (n--) {
        bool test = true;
        int g;
        long prev_id;
        std::cin >> g >> prev_id;
        long position = 2; 

        for (int i = 1; i < g; i++) { 
            long curr_id;
            std::cin >> curr_id;
            if (curr_id != prev_id + 1 && test) {
                std::cout << position << std::endl;
                test = false;
            }
            prev_id = curr_id;
            position++;
        }
    }
}
