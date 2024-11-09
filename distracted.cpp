#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
   
    for (int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int suspicious=1;
        
        for (int j=0; j<n; j++){
            if(s[j] != s[j+1]){
                for(int k=j+1; k<n ;k++){
                   if (s[j]==s[k]){
                       suspicious=0;
                   } 
                }
            }
        }
        if (suspicious==1){
        cout<<"YES"<<endl;
        }
        else {
        cout<<"NO"<<endl; 
        }
    }
    
    
    
    return 0;
}
