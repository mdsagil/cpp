#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
using namespace std;
int main(){
    set<int> s; //duplicat not allowed
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(2);
    
    cout<<"lower bound = "<<*(s.lower_bound(4))<<endl;
    cout<<"upper bound = "<<*(s.upper_bound(4))<<endl;
    cout<<s.size()<<endl;

    for(auto val : s){
        cout<<val<<" ";
    }
    cout<<endl;
}