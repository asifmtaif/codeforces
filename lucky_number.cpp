#include <iostream>
using namespace std;
 
int main() {
    long long int n; 
    cin>>n;
    long long int x=n;
    //cout<< x<< "\n";
    int flag=1, count=0 , digitcount=0;
    
    for (int i=0; n!=0; i++){
            n= n/10; 
            digitcount++;
    }
    //cout<< digitcount<< "\n";
    for (int i=0; i<digitcount; i++){
        if (x%10 == 4 or x%10 == 7){
            count++;
            x= x/10; 
            //cout << x<< "  inside if\n";
        }
        else{
            x=x/10; 
            //cout << x<< "  inside if   1\n";
        }
    }
    //cout << count<< "\n";
    if (count ==4 or count==7){
        cout<<("YES");
    }
    else{
        cout<<("NO");
    }
 
    return 0;
}