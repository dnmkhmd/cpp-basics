#include <iostream>

int findMin(int arr[], int size) {
    if (size <= 0) return 0;
    int minValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
    return minValue;
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

    int min = findMin(array, n);
    std::cout << min << std::endl;

    delete[] array;
    return 0;
}