#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    if (n == 1) {
        cout << "Ehab" << endl;
    } else if (n % 2 == 0) {
        cout << "Mahmoud" << endl;
    } else {
        cout << "Ehab" << endl;
    }

    return 0;
}
