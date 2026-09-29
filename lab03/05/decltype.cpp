#include <iostream>

int main() {
    int x = 5;
    decltype(x) y = 10;
    std::cout << y << std::endl;
    return 0;
}