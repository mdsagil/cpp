#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int target){
    int ans=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            ans=i;
            
        }
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<linearSearch(arr,n,target);
    
}