#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string a;
    getline(cin, a);

    set<char> uniqueLetters;
    int counter = 0;

    for (char ch : a) {
        if (isalpha(ch)) {
            uniqueLetters.insert(tolower(ch)); 
        }
    }

    for (char ch : uniqueLetters) {
        counter++;
    }

    cout << counter << endl;

    return 0;
}
