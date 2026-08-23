#include<iostream>
using namespace std;
//fincction are set of code which performs something for you
//voo\id -> which does not return anything
// return
//parameterised
//non parameterised


// void printName(string name){
//     cout<<"hey"<<name<<endl;
// }
// int main(){
//     string name;
//     cin>>name;
//     printName(name);

//     string name2;
//     cin>>name2;
//     printName(name2);

// }


// #2nd

int sum(int num1, int num2){
        int num3 = num1 + num2;
        return num3;
    }

int main(){
        int num1, num2;
        cin>>num1>>num2;
        int res = sum(num1, num2);
        cout<<res;
}