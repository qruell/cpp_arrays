#include <iostream>

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    std::cout << "Enter " << SIZE << " numbers:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Array in reverse order:" << std::endl;
    for (int i = SIZE - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
