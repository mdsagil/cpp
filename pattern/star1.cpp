#include <iostream>
using namespace std;
int main() {

    //  for(int i=1; i<=5; i++) {
    //     cout << "**" << endl;
    //  }
    // for(int i=1; i<=x; 
    // int x=10;i++) {
    //     cout << "*" << endl;
    // }
    
    int n=10;
    for(int i=1; i<=n; i++) {
        int m=5;
        for(int j=1; j<=m; j++) {
            cout << "*";
        }
         cout << endl;
    }
    return 0;
}