#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> x(10);
    
    for (int i = -1; i < 9;) {
        x[++i] = 1;
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}