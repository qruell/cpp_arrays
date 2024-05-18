#include <iostream>

int main() {
    const int MONTHS = 12;
    double profits[MONTHS];

    std::cout << "Enter the profit for each month:" << std::endl;
    for (int i = 0; i < MONTHS; ++i) {
        std::cout << "Profit for month " << i + 1 << ": ";
        std::cin >> profits[i];
    }

    double maxProfit = profits[0];
    double minProfit = profits[0];
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 1; i < MONTHS; ++i) {
        if (profits[i] > maxProfit) {
            maxProfit = profits[i];
            maxIndex = i;
        }
        if (profits[i] < minProfit) {
            minProfit = profits[i];
            minIndex = i;
        }
    }

    const char* months[] = { "January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November", "December" };

    std::cout << "Month with the maximum profit: " << months[maxIndex] << std::endl;
    std::cout << "Month with the minimum profit: " << months[minIndex] << std::endl;

    return 0;
}
