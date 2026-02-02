#include <iostream>

int findMax(int arr[], int size) {
    if (size <= 0) return 0;

    int maxValue = arr[0];

    for (int i = 1; i <= size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    return maxValue;
}

int main() {
    int n;
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input!\n";
        return 0;
    }

    int* array = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    int max = findMax(array, n);

    std::cout << max << std::endl;

    delete[] array;
    return 0;
}