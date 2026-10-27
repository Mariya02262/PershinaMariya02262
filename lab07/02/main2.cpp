#include <iostream>
using namespace std;

int main() {
    int x = 1, y = 2, z = 3;
    
    ++x, z = z + 2*x + 3*y, ++y;
    
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    return 0;
}