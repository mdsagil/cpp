#include <iostream>
#include <algorithm>
using namespace std;
// void bubble_sortArray(int nums[],int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(nums[j]>nums[j+1]){
//                 swap(nums[j],nums[j+1]);
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int nums[n];
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }
//     bubble_sortArray(nums,n);
//     for(int i=0; i<n; i++){
//         cout<<nums[i]<<" ";
//     }
// }

void bubble_sortArray(int nums[],int n){
    for(int i=0; i<n; i++){
        bool swapped=false;
        for(int j=0; j<n-i-1; j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                swapped=true;
            }
        }
        if(swapped=false){
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    bubble_sortArray(nums,n);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}