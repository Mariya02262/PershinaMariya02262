#include <iostream>
#include <utility>
using namespace std;

int main() {
    int a = 1, b = 2;
    
    cout << "do: a = " << a << ", b = " << b << endl;
    
    swap(a, b);
    
    cout << "posle swap: a = " << a << ", b = " << b << endl;
    
    return 0;
}