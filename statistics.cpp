#include <iostream>
#include <climits>

int main(){
    int n;
    for (int i =0; std::cin>>n; i++){
        long min = LONG_MAX;
        long max = LONG_MIN;
        for (int j=0; j < n  ;j++){
            long m;
            std::cin >>m;
            min = (m < min) ? m:min;
            max = (m > max) ? m:max;
        }
        std::cout << "Case " << (i+1) << ": " << min << " " << max << " " << max-min << std::endl;
    }
    return 0;
}
