#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    for (int i = 0; i < 1000000; i++) s = s + 'a';
    cout << s.size() << endl;
    return 0;
}