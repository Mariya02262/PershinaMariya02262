#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 3;
    x = 15, y += x, x += y;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}