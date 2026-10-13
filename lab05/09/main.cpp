#include <iostream>

int main() {
    long long a, b, c, d, e, f, g, h;
    std::cin >> a >> b >> c >> d >> e >> f >> g >> h;

    long long left = (a * d + c * b) * (f * h);
    long long right = (e * h + g * f) * (b * d);

    if (left > right)
        std::cout << 1 << std::endl;
    else if (left < right)
        std::cout << -1 << std::endl;
    else
        std::cout << 0 << std::endl;

    return 0;
}
