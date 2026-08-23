#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> vec={1,2,4,5,6};
    //1
    
    // for(auto it=vec.begin(); it!=vec.end(); it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;

    //2
    
    for(auto it=vec.rbegin(); it!=vec.rend(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
}