#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n > 0) {
        std::cout << "Positive\n";
    } else if (n < 0) {
        std::cout << "Negative\n";
    } else {
        std::cout << "Zero\n";
    }

    return 0;
}