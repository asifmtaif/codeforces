#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int up=0, low=0;
    for (int i=0; i<s.size(); i++){
        if (s[i]>= 'a' && s[i]<='z'){
            low++;
        }
        else{
            up++;
        }
    }
    
    if (low>up){
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        cout<<s<<endl; 
    }
    else if (low==up){
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        cout<<s<<endl; 
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper); 
        cout<<s<<endl;
    }

    return 0;
}
