#include<iostream>
using namespace std;
//1
void pattern1(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
//  2
void pattern2(int n) {
    int start;
    for(int i = 0; i < n; i++) {

        if(i % 2 == 0)
            start = 1;
        else
            start = 0;

        for(int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}
//3
void pattern3(int n){
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        //numbers
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        //numbers
        for(int j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
        space -=2;
    }
}
//4
void pattern4(int n){
    int start=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<start;
            start++;
        }
        cout<<endl;
    }
}
//5
void pattern5(int n){
    for(int i=0; i<n; i++){
        char ch='A';
        for(int j=0; j<=i; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}
//6
void pattern6(int n){
    for(int i=n; i>=1; i--){
        char ch='A';
        for(int j=i; j>0; j--){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}
//7
void pattern7(int n){
    char ch='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
}
//8
void pattern8(int n){
    for(int i=1; i<=n; i++){
        char ch='A';
        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        //A
        
        for(int j=1; j<=2*i - 1; j++){
            cout<<ch;
            if(j<i){
                ch++;
            }else{
                ch--;
            }

        }
        //space 
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
//9
void pattern9(int n){
    for(int i=1; i<=n; i++){
        char ch='A' +(n-1);
        for(int j=1; j<=i; j++){
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        pattern1(n);
    }
}
