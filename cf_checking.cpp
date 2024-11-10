#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        char a;
        cin>>a;
        if (a=='c' || a=='o' ||a=='d' ||a=='e' ||a=='f' ||a=='r' ||a=='s' ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}
