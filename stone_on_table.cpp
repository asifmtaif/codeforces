#include <iostream>
using namespace std;

int main() {
    int n, count=0;
    cin>>n;
    char str[n];
    cin>> str;
    //cout<< str;
    
    for (int i=0; i<n; i++ ){
        if (str[i]==str[i+1]){
            count++;
        }
    }
    cout<<count;

    return 0;
}
