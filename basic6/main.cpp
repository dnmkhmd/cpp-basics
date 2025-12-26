#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input!\n";
        return 0;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    std::cout << sum << std::endl;

    return 0;

}