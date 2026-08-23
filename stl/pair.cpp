#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    // pair<string, int> p={"sagil",4};
    pair<int, pair<char,int>> p={2,{'a',6}};

    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
   
}