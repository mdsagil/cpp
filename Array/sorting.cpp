#include <iostream>
using namespace std;

void selectionSort(int nums[], int n) {

    for(int i = 0; i < n-1; i++) {

        int minIndex = i;

        for(int j = i+1; j < n; j++) {

            if(nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }

        swap(nums[i], nums[minIndex]);
        // int temp = nums[minIndex];
        // nums[minIndex] = nums[i];
        // nums[i] = temp;
    }
}

int main() {
    int n;
    cin >> n;

    int nums[n];

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    selectionSort(nums, n);

    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
}