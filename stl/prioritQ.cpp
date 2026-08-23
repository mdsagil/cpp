#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int> q; //largrst prior
    priority_queue<int,vector<int>,greater<int>> q; //reverse

    q.push(8);
    q.push(2);
    q.push(4);
    q.push(3);

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    
    
}