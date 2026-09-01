#include <bits/stdc++.h>
using namespace std;
//1st method

// void print(int i, int sum){
//     if(i<1){
//         cout<<sum<<endl;
//         return;
//     }
//     print(i-1,sum+i);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(n,0);
//     return 0;
// }

// 2nd method

int print(int n){
    if(n==0){
        return 0;
    }
    return n + print(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<print(n);
    return 0;
}