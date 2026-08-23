#include <iostream>
using namespace std;
int seconLargestArray(int nums[], int n){
    int largest=nums[0];
    int secondlargest=nums[0];
    for(int i=1; i<n; i++){
        if(nums[i]>largest){
            secondlargest=largest;
            largest=nums[i];
        }
        if(nums[i]>secondlargest && nums[i]!=largest){
            secondlargest=nums[i];
        }
    }
    return secondlargest;
}
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<<seconLargestArray(nums,n);
    return 0;
}