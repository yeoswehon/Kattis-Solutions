#include <iostream>

int main(){
    long long n;
    std::cin >> n;
    int day = 0;
    long long minimum_space_junk =100000;
    for (int i=0; i <n; i++){
        long long space_junk;
        std::cin >> space_junk;
        if (space_junk < minimum_space_junk){
            minimum_space_junk = space_junk;
            day = i;
        }
        
    }
    std::cout << day;
}
