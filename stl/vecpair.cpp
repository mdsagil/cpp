#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    vector<pair<int,int>> vec={{1,2}, {2,4}, {3,7}};
    vec.push_back({2,9}); //insert
    vec.emplace_back(8,5); //in_place object create

    for(auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
   
}