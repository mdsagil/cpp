#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
using namespace std;
int main(){
    map<string,int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 125;
    m["watch"] = 130;

    m.insert({"bat", 20});
    m.emplace("phone", 80);

    m.erase("tv");

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"count = "<<m.count("laptop")<<endl;
    cout<<"count = "<<m["bat"]<<endl;
    
    if(m.find("camera") != m.end()){
        cout<<"found\n";
    }else{
        cout<<"not found\n";
    }
}