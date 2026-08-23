#include <iostream>
using namespace std;

int secondLargestElement(int arr[], int n) {
    int largest = arr[0];
    int secondlargest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondlargest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << secondLargestElement(arr, n);

    return 0;
}