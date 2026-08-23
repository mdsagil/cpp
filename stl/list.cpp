#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    list<int> l;
    //list<int> l={1,2,3,4};

    l.push_back(4);
    l.push_back(3);
    l.push_front(2);
    l.push_front(1);
    l.pop_back();
    l.pop_front();

    for(int val : l){
        cout<<val<<" ";
    }
    cout<<endl;
   
}