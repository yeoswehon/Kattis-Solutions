#include <iostream>

void swapvalues(int *a, int *b){
    if (*a>*b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(){
    int l,r;
    std::cin >> l >> r;
    swapvalues(&l,&r);
    if (l == 0 && r == 0) {
        std::cout << "Not a moose";
    }
    
    else if (l == r){
        std::cout << "Even " << (l+r);
    }
    else{
        std::cout << "Odd " << r*2;
    }
}
