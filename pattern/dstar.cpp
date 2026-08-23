#include<iostream>
using namespace std;
//1
void pattern1(int n) {

    // Upper Half
    int spaces = 0;

    for(int i = 1; i <= n; i++) {

        // Left Stars
        for(int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        // Spaces
        for(int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Right Stars
        for(int j = 1; j <= n - i + 1; j++) {
            cout << "*";
        }

        spaces += 2;
        cout << endl;
    }

    // Lower Half
    spaces = 2 * (n - 1);

    for(int i = 1; i <= n; i++) {

        // Left Stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for(int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Right Stars
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        spaces -= 2;
        cout << endl;
    }
}
//2
void pattern2(int n){
    for(int i = 1; i <= 2*n-1; i++) {

    int stars = i;

    if(i > n)
        stars = 2*n - i;

    int spaces = 2 * (n - stars);

    // Left Stars
    for(int j = 1; j <= stars; j++)
        cout << "*";

    // Spaces
    for(int j = 1; j <= spaces; j++)
        cout << " ";

    // Right Stars
    for(int j = 1; j <= stars; j++)
        cout << "*";

    cout << endl;
}
}
//3
void pattern3(int n) {

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n; j++) {

            if(i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}
//4
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        pattern3(n);
    }
}