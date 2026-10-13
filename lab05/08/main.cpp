#include <iostream>
#include <iomanip>

int main() {
    long long a = 9007199254740993LL;
    double d = a;
    std::cout << std::fixed << std::setprecision(0) << d << std::endl;
    return 0;
}