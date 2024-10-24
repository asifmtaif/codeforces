#include <iostream>
using namespace std;

int main() {
    int n, acount=0, dcount=0;
    cin>>n;
    char str[n];
    
    cin>> str;
    
    for(int i=0; i<n; i++){
        if (str[i]=='A'){
            acount++;
        }
        else if(str[i]== 'D'){
            dcount++;
        }
    }
    // cout<< acount<< "\n";
    // cout<< dcount<< "\n";
    
    if (acount>dcount){
        cout<<"Anton";
    }
    else if (acount<dcount){
        cout<<"Danik";
    }
    else {
        cout<< "Friendship";
    }

    return 0;
}
