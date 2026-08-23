#include <iostream>
using namespace std;
int main() {
    int n=56, count=1;

    while(count <= n) {
        cout << count << " ";
        // if count++ is removed then print 1 1 1 1 1 ......1
        count++;
    }
}