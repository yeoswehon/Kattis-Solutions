#include <iostream>
#include <numeric>

int main() {
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;

    long long lcm_cd = std::lcm(c, d);

    long long multiples_in_range = (b / lcm_cd) - ((a - 1) / lcm_cd);

    std::cout << multiples_in_range << std::endl;
    return 0;
}
