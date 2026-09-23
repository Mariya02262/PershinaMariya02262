#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2;
    int c = a + ++b; 
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    
    return 0;
}