#include <iostream>
#include <cmath>

int main() {
    for (int n = 16380; n <= 16390; n++) {
        long double s = powl(2, n);
        std::cout << "n=" << n << ": " << std::fixed << s << std::endl;
    }
    return 0;
}