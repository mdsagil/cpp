#include <iostream>
using namespace std;
void findAll(int nums[], int n, int target) {
    
    for(int i=0; i<n; i++){
        if(nums[i]==target){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    findAll(nums,n,target);
    
}