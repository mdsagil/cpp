#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1={1,2,4,5,6};
    vec1.erase(vec1.begin()+1, vec1.begin()+3);
    vec1.insert(vec1.begin()+1,9);
    vector<int> vec2(vec1);
    vector<int> vec3(3,6);
    
    
    for(int val:vec2){
        cout<<val<<" ";
    
    }
    cout<<endl;
    for(int val:vec3){
        cout<<val<<" ";
    }
    cout<<endl;

}