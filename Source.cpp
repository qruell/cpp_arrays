#include <iostream>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    const int n = 10;
    int array[n];

    for (int i = 0; i < n; ++i) {
        array[i] = std::rand() % 100 + 1;
    }

    int min_element = array[0];
    int max_element = array[0];

    for (int i = 1; i < n; ++i) {
        if (array[i] < min_element) {
            min_element = array[i];
        }
        if (array[i] > max_element) {
            max_element = array[i];
        }
    }

    std::cout << "Array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Minimum element: " << min_element << std::endl;
    std::cout << "Maximum element: " << max_element << std::endl;

    return 0;
}
