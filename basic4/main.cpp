#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input!\n";
        return 0;
    }

    if (n >= 18) {
        std::cout << "Adult\n";
    } else {
        std::cout << "Minor\n";
    }

    return 0;
}