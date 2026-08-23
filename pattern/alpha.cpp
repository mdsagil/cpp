#include <iostream>
using namespace std;
int main(){
    // int n=4;
    // char ch='A';
    
    // for(int i=1; i<=n; i++){
        
    //     for(int j=1; j<=i; j++){
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }


    // int n=3;
    // char ch='A';
    // for(int i=1; i<=n; i++){
       
    //     for(int j=i; j>0; j--){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
       
    //     cout<<endl;
    // }

    //reverse A
    int n=4;
    char ch='A';
    for(int i=1; i<=n; i++){
        for(int j=i; j>0; j--){
            cout<<char('A'+j-1)<<" ";
            
        }
        cout<<endl;
    }
    
}