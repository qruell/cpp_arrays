#include <iostream>

int main() {
    const int NUM_SIDES = 5;
    double sides[NUM_SIDES];
    double perimeter = 0;

    std::cout << "Enter the length of each side of the pentagon:" << std::endl;
    for (int i = 0; i < NUM_SIDES; ++i) {
        std::cout << "Side " << i + 1 << ": ";
        std::cin >> sides[i];
        perimeter += sides[i];
    }

    std::cout << "Perimeter of the pentagon: " << perimeter << std::endl;

    return 0;
}
