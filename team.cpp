// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int t, a,b,c, count=0;
    cin>>t;
    
    for(int i=0; i<t; i++){
        cin>> a;
        cin>> b;
        cin>> c;
        if(a==1 and b==1 and c==1){
            count++;
        }
        else if(a==1 and b==1){
            count++;
        }
        else if(a==1 and c==1){
            count++;
        }
        else if (b==1 and c==1){
            count++;
        }
    }
    cout<<count;

    return 0;
}
