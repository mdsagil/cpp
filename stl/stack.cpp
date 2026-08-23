#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;
int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s2;

    s2.swap(s);
    

    // cout<<"top = "<<s.top()<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();  // during pop reverse print
    }
    cout<<endl;
    
}