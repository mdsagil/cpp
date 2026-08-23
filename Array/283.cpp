#include <iostream>
using namespace std;
int moveZeroArray(int arr[], int n){
    int k=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[k]=arr[i];
            k++;
        }
    }
    for(int i=k; i<n; i++){
            arr[i]=0;
        }
    return k;
}
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    moveZeroArray(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}