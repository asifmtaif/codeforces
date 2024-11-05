#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> uniqueInputs;
    int input; 

    for (int i = 0; i < 4; ++i) {
        cin >> input;
        uniqueInputs.insert(input);
    }

 
    int difference = 4 - uniqueInputs.size();

    cout << difference << endl;

    return 0;
}
