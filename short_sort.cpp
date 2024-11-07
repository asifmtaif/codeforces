#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) { 
        string s;
        cin >> s;

        int diff_count = 0;
        if (s[0] != 'a') diff_count++;
        if (s[1] != 'b') diff_count++;
        if (s[2] != 'c') diff_count++;

       
        if (diff_count == 0 || diff_count == 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
