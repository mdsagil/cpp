#include<iostream>
using namespace std;
int minOfTwo(int a,int b){//parameters
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout << "min = "<<minOfTwo(3,6)<<endl;
}