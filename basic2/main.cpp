#include <iostream>
#include <iomanip>

int main() {
    double price;
    int count;
    std::cin >> price >> count;

    double totalPrice = price * count;
    std::cout << std::fixed << std::setprecision(2) << totalPrice << std::endl;

    return 0;

}