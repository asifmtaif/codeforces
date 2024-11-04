#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b;
    if (a>b){
        c=b;
        a=a-b;
        d= a/2; 
    }
    else{
        c=a;
        b=b-a;
        d= b/2; 
    }
    
    cout <<c<<" "<<d;
    
    return 0;
}
