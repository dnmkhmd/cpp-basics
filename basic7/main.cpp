#include <iostream>

int main() {
    int size;
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid input!\n";
        return 0;
    }

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << max << std::endl;

    delete[] arr;

    return 0;
}