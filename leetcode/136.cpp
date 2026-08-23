#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
using namespace std;
int main(){
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]!=nums[j]){
                return nums[j];
            }
        }
    }
    return {};
}