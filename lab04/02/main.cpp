#include <iostream>

int main() {
    int a = 100;
    int b = 0x64;
    int c = 0144;
    int d = 0b1100100;

    unsigned int e = 100U;
    long f = 100L;
    unsigned long g = 100UL;
    long long h = 100LL;
    unsigned long long i = 100ULL;

    std::cout << a << " " << b << " " << c << " " << d << std::endl;
    std::cout << e << " " << f << " " << g << " " << h << " " << i << std::endl;

    return 0;
}