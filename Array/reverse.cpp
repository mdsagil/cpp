#include <iostream>
using namespace std;
void reverseArray(int nums[], int n) {
    int left = 0;
    int right = n - 1;

    while(left < right) {
        swap(nums[left], nums[right]);

        left++;
        right--;
    }
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    reverseArray(nums,n);
    
}