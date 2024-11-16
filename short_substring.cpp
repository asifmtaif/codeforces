#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        cout << s[0] << s[1]; 

        for (int i = 2; i < s.length(); i += 2) {
            cout << s[i + 1];
        }

        cout << endl;
    }

    return 0;
}
