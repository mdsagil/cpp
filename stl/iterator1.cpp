#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> vec={1,2,4,5,6};
    //1
    // vector<int>::iterator it;

    // for(it=vec.begin(); it!=vec.end(); it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;

    //2
    vector<int>::reverse_iterator it;
    for(it=vec.rbegin(); it!=vec.rend(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
}