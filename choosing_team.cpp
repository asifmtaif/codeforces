#include <iostream>
using namespace std;

int main() {
    int n, k, count=0;
    cin>>n>>k;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>> arr[i];
        arr[i]+=k;
        if (arr[i]<=5){
            count++;
        }
    }

    cout<<count/3;

    return 0;
}
