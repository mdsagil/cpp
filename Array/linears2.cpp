#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int target){
    
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            cnt++;
            
        }
    }
    return cnt;
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