#include <iostream>
using namespace std;

int main() {
    int a[5][5];
    int x,y;
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>a[i][j];
            if (a[i][j]==1){
                x=i;
                y=j;
            }
        }
    }
    // cout<< x<<" "<<y<<"\n";
    // for(int i=0; i<5; i++){
    //     for(int j=0; j<5; j++){
    //         cout<<a[i][j]<< "  ";
    //     }
    //     cout<<"\n";
    // }
    
    if (x>2){
        x=x-2;
    }
    else{
        x=2-x;
    }
    if (y>2){
        y=y-2;
    }
    else{
        y=2-y;
    }
    
    cout<<x+y;

    return 0;
}
