#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,b,c,d;
    cin>>a>>b>>c;
    
    d= a+b;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    
    cout<<c<<"\n"<<d<<"\n";
    if(d==c){
        cout<<"YES";
    }
    else{
        cout<< "NO";
    }
    
    return 0;
}
