#include<iostream>
#include<vector>
#include <algorithm> // sort()
#include <cmath>     // sqrt()
using namespace std;

//normal method o(n)
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }


//o(rootn)

void printDivisors(int n) {

    vector<int> ls;

    for(int i = 1; i <= sqrt(n); i++) {

        if(n % i == 0) {

            ls.push_back(i);

            if((n / i) != i) {
                ls.push_back(n / i);
            }
        }
    }

    sort(ls.begin(), ls.end());

    for(auto it : ls)
        cout << it << " ";
}
int main() {
    int n;
    cin >> n;

    printDivisors(n);

    return 0;
}