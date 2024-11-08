#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;
    int n;
    cin >> password >> n;

    string words[100]; 
    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    bool can_unlock = false;

    for (int i = 0; i < n; ++i) {
        if (words[i] == password) {
            can_unlock = true;
            break;
        }
    }

    if (!can_unlock) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (words[i][1] == password[0] && words[j][0] == password[1]) {
                    can_unlock = true;
                    break;
                }
            }
            if (can_unlock) {
                break;
            }
        }
    }

    if (can_unlock) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    } 

    return 0;
}
