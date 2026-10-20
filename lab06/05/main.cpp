#include <iostream>

namespace first {
    int x = 1;
    void hello() {
        std::cout << "Privet iz first" << std::endl;
    }
}

namespace second {
    int x = 2;
    void hello() {
        std::cout << "Privet iz second" << std::endl;
    }
}

int main() {
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;

    first::hello();
    second::hello();

    using namespace second;
    std::cout << x << std::endl;
    hello();

    return 0;
}