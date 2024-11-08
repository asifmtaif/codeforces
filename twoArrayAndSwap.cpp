#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n,k;
        cin>>n>>k;
        int sum_1=0, sum_2=0;
        int a[n], b[n];
        for (int j=0; j<n; j++){
            cin>>a[j];
            sum_1+=a[j];
        }
        for (int j=0; j<n; j++){
            cin>>b[j];
        }
        
        sort (a,a+n);
        sort (b,b+n);
        reverse (b,b+n);
        
        for (int j=0; j<k; j++){
            if (a[j]<b[j]){
                swap (a[j], b[j]);
            }
        }
        
        for (int j=0; j<n; j++){
            sum_2+=a[j];
        }
        
        if (sum_1>sum_2){
            cout<<sum_1<<endl;
        }
        else if(k==0){
            cout<< sum_1<<endl;
        }
        else{
            cout<< sum_2<<endl;
        }
        
    }

    return 0;
}
