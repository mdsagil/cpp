#include <bits/stdc++.h>
using namespace std;
int cnt=0;
void print(int i, int n){
    if(i>n){
        return;
    }
    cout<<"sagil"<<endl;
    
    print(i+1,n);
}

int main(){
    int n;
    cin>>n;
    print(1,n);
    return 0;
}