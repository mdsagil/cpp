#include <iostream>
using namespace std;
int diffArray(int nums[], int n){
    int largest=nums[0];
    int smallest=nums[0];
    for(int i=1; i<n; i++){
        if(nums[i]>largest){
            largest=nums[i];
        }
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }
    return largest-smallest;
}
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<<diffArray(nums,n);
    return 0;
}