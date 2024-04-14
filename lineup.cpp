#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    
    std::string firstname, secondname;
    bool increasing = false;
    bool neither = false;
    std::cin >> firstname >> secondname;

    if (firstname < secondname) {
        increasing = true;
    }

    for (int j = 0; j < n - 1; j++) {
        firstname = secondname;
        std::cin >> secondname;

        if (increasing && firstname > secondname) {
            neither = true;
            break;
        } else if (!increasing && firstname < secondname) {
            neither = true;
            break;
        }
    }

    if (!neither) {
        if (increasing) {
            std::cout << "INCREASING" << std::endl;
        } else {
            std::cout << "DECREASING" << std::endl;
        }
    } else {
        std::cout << "NEITHER" << std::endl;
    }

    return 0;
}
