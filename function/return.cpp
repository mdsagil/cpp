#include<iostream>
using namespace std;
// void sum(int a, int b){
//     cout<<a+b;
// }
// int main(){
//     int a;
//     cout<<"enter 1st no : ";
//     cin>>a;
//     int b;
//     cout<<"enter 2nd no : ";
//     cin>>b;
//     sum(a,b);
// }
int sum(int a, int b){
    int s = a+b;
    return s;
}
int main(){
    cout<<sum(7,8);
}