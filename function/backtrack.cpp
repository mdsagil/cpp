#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void print(int i, int n){
    if(i<1){
        return;
    }
    // cout<<i<<endl;  //before calling funtion cout print 4,3,2,1
    
    print(i-1,n);
    cout<<i<<endl; //after calling function cout print 1 2 3 4
}

int main(){
    int n;
    cin>>n;
    print(n,n);
    return 0;
}