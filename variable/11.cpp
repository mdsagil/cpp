#include <iostream>
using namespace std;
int main() {
    int a = 10;

    int b = a++; //work; update
    int c = ++a;
    cout << "b = " << b << endl; //10
    cout << "a = " << a << endl; //12
    cout << "c = " << c << endl;
    return 0;
}