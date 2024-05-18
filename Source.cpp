#include <iostream>

int main() {
    const int MONTHS = 6;
    double profits[MONTHS];
    double totalProfit = 0;

    std::cout << "Enter the profit for each month:" << std::endl;
    for (int i = 0; i < MONTHS; ++i) {
        std::cout << "Month " << i + 1 << ": ";
        std::cin >> profits[i];
        totalProfit += profits[i];
    }

    std::cout << "Total profit for 6 months: " << totalProfit << std::endl;

    return 0;
}
