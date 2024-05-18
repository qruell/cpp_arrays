#include <iostream>

int main() {
    const int months = 12;
    double profits[months];

    std::cout << "Enter the profits for each month:" << std::endl;
    for (int i = 0; i < months; ++i) {
        std::cin >> profits[i];
    }

    int start_month, end_month;
    std::cout << "Enter the range (start and end month, 1-12): ";
    std::cin >> start_month >> end_month;

    start_month--;
    end_month--;

    int min_month = start_month;
    int max_month = start_month;

    for (int i = start_month + 1; i <= end_month; ++i) {
        if (profits[i] < profits[min_month]) {
            min_month = i;
        }
        if (profits[i] > profits[max_month]) {
            max_month = i;
        }
    }

    std::cout << "Month with minimum profit: " << min_month + 1 << " (Profit: " << profits[min_month] << ")" << std::endl;
    std::cout << "Month with maximum profit: " << max_month + 1 << " (Profit: " << profits[max_month] << ")" << std::endl;

    return 0;
}
