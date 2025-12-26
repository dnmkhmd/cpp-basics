#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input!\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}