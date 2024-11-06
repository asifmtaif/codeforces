#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for(int test_case = 0; test_case < t; test_case++) { 
        int n;
        cin >> n;
        int a[n];
        
        for(int i = 0; i < n; i++) { 
            cin >> a[i];
        }
        
        int common = -1;  
        for(int i = 0; i < n - 1; i++) {  
            if (a[i] == a[i + 1] || a[i] == a[n-1]) {
                common = a[i];
                break;
            }
        }
        
        for(int i = 0; i < n; i++) { 
            if (a[i] != common) {
                cout << i + 1 << "\n"; 
            }
        }
    }
    return 0;
}
