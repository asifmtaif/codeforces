#include <iostream>
#include <string>

void swapFirstLetters(std::string& a, std::string& b) {
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
}

int main() {
    int n;
    std::string a, b;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> a >> b;

        if (a.size() != 3 || b.size() != 3) {
            std::cout << "Both strings must be of size 3. Please try again." << std::endl;
            continue;
        }

        swapFirstLetters(a, b);
        std::cout << a << " " << b << std::endl;
    }

    return 0;
}
 
