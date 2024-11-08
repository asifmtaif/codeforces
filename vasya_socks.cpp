#include <iostream>
using namespace std;

int main() {
    int t,m;
    cin >> t>>m;

    for (int i =1 ; i <= t; i++) { 
       if (i%m==0){
           t+=1;
       }
    }
    cout<<t;

    return 0;
}
