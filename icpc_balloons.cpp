#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int i;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        vector<int> arr(26, 0);
        for (int j=0; j<n; j++){
            arr[s[j] - 'A']++;

        }
        for(int i = 0; i < 26; i++) {
            count += arr[i] ? arr[i] + 1 : 0;
        }
        cout << count<<endl;

    }

    return 0;
}
