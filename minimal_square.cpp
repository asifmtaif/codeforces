#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int max_side = max(a, b);
        int min_side = min(a, b);

        int required_side = max(max_side, 2 * min_side);
        cout << required_side * required_side << endl;
    }
    return 0;
}
