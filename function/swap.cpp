#include <bits/stdc++.h>
using namespace std;
//method 1

// void print(int arr[],int left,int right){
//     if(left>=right){
//         return;
//     }
//     swap(arr[left],arr[right]);
//     print(arr,left+1,right-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     print(arr,0,n-1);
//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//method 2

void print(int arr[],int i,int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    print(arr,i+1,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    print(arr,0,n);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}