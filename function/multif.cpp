#include<iostream>
using namespace std;
void usa() {
    cout<<"you are in usa"<<endl;
    return;
}
void india() {
    cout<<"you are in india"<<endl;
    usa();
    return;
}
int main() {
    cout<<"you are in main"<<endl;
    india();
    return 0;
}