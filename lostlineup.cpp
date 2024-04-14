#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> array(n);
    array[0] = 1;

    for (int i = 2; i <= n; ++i) {
        int d;
        std::cin >> d;
        array[d+1] = i;
    }
    
    for (int i =0; i < n; i++){
        std::cout << array[i] << " ";
    }
}
