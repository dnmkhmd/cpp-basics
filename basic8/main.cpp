#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input!\n";
        return 0;
    }

    int countOfeven = 0;

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        if (x % 2 == 0) {
            countOfeven++;
        }
    }

    std::cout << countOfeven << std::endl;

    delete[] array;

    return 0;

}