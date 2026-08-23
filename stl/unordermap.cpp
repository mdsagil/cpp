#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;

    m.emplace("tv", 100);
    m.emplace("laptop", 100);
    m.emplace("bat", 100);
    m.emplace("van", 100);

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}