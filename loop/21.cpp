#include <iostream>
using namespace std;
int main() {
    int n=500;
    int sum = 0;
    for(int i=1; i<=n; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    for(int i=1; i<=n; i++) { // 1+2+3+4+5=>15 because break is 5
        sum +=i;
        if(i == 5) {
            break;
        }
    }
    cout << "sum = " << sum << endl;
    return 0;
}