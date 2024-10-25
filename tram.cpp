#include <iostream>
using namespace std;

int main() {
    int n, sum=0, max;
    cin>>n;
    for (int i=0; i<n; ++i){
        int a, b;
        cin>>a;
        cin>>b;
        sum -=a;
        sum+=b;
        if (i==0){
            max=sum;
            // cout<< "inside if 1\n";
        }
        if (max<sum){
            max=sum;
            // cout<< "inside if 2\n";
        }
    // cout<<"sum "<<sum<< "\n"; 
    // cout<<"max "<<max<< "\n"; 
    }
    
    cout<<max;

    return 0;
}
