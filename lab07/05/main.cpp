#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2;
    
    cout << "do: a = " << a << ", b = " << b << endl;
    
    a, b = b, a;
    
    cout << "posle: a = " << a << ", b = " << b << endl;
    
    return 0;
}