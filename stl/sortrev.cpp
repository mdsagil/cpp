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
    vector<int> vec = {3,5,2,4,6,};
    reverse(vec.begin()+1, vec.end());

    for(auto val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
}
