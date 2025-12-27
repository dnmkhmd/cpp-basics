#include <iostream>

bool isEven(int x) {
    return x % 2 == 0;
}

int main() {
    int n;
    std::cin >> n;

    if (isEven(n)) {
        std::cout << "Even\n";
    } else {
        std::cout << "Odd\n";
    }

    return 0;
}