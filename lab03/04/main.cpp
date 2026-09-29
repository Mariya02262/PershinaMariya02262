#include <iostream>
#include <typeinfo>

int main() {
    bool x = true, y = false;
    auto z = x + y;
    std::cout << "z: " << typeid(z).name() << ", size: " << sizeof(z) << std::endl;
    return 0;
}