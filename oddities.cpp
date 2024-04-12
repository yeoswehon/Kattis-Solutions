#include <iostream>
#include <string>

int main(){
    int n;
    std::cin >> n;
    while (n--){
        int k;
        std::cin >> k;
        if (k%2==0){
            std::cout << k << " is even" << std::endl;
    }
        else{
            std::cout << k << " is odd" << std::endl;
        }
    }
    return 0;
}
