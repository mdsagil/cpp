#include <iostream>
using namespace std;
int removeElementArray(int arr[], int n, int val){
    int k=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=val){
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}
int main(){
    int n;
    cin>>n;
    int val;
    cin>>val;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k = removeElementArray(arr, n, val);
    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
}