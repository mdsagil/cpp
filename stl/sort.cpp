#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    // int arr[5]={3,5,4,8,2};

    // sort(arr, arr+5);

    vector<int> vec = {2,5,3,7,9};
    sort(vec.begin(), vec.end(),greater<int>()); //greater<int>() use for descending order

    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;

}
