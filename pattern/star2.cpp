#include <iostream>
using namespace std;
int main() {
    int n=4;
     
    for(int i=1; i<=n; i++) { //outer

        for(int j=n; j>=1; j--) {

            if(j<=i){
                cout << n-j+1 <<" ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;

    }
} 