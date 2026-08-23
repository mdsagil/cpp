#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original = n;
    
    int sum=0;
    while(n>0){
        int digit = n%10;
        sum = sum + (digit*digit*digit);
        n = n/10;
    }
    if(sum==original){
        cout<<"armstrong number";
    }else{
        cout<<"not armstrong number";
    }
}