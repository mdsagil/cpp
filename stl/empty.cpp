#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,4,5,6};
    // vec.clear();
    
    
    for(int val:vec){
        cout<<val<<" ";
    
    }
    cout<<endl;
    cout<<"is empty : "<<vec.empty()<<endl;
    

}