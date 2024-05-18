#include <iostream>

int main() {
    int N;
    std::cout << "Enter the number of elements: ";
    std::cin >> N;

    double* arr = new double[N];
    std::cout << "Enter the elements: ";
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    double sumNeg = 0;
    double productBetweenMinMax = 1;
    bool minMaxFound = false;
    double productEvenIndex = 1;
    double sumBetweenFirstLastNeg = 0;
    int firstNegIndex = -1, lastNegIndex = -1;

    double minElement = arr[0], maxElement = arr[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 0; i < N; ++i) {
        if (arr[i] < 0) {
            sumNeg += arr[i];
            if (firstNegIndex == -1) firstNegIndex = i;
            lastNegIndex = i;
        }
        if (i % 2 == 0) {
            productEvenIndex *= arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    if (minIndex > maxIndex) std::swap(minIndex, maxIndex);
    if (maxIndex - minIndex > 1) {
        minMaxFound = true;
        for (int i = minIndex + 1; i < maxIndex; ++i) {
            productBetweenMinMax *= arr[i];
        }
    }
    else {
        productBetweenMinMax = 0;
    }

    if (firstNegIndex != -1 && lastNegIndex != -1 && firstNegIndex < lastNegIndex) {
        for (int i = firstNegIndex + 1; i < lastNegIndex; ++i) {
            sumBetweenFirstLastNeg += arr[i];
        }
    }

    std::cout << "Sum of negative elements: " << sumNeg << std::endl;
    std::cout << "Product of elements between min and max elements: " << (minMaxFound ? productBetweenMinMax : 0) << std::endl;
    std::cout << "Product of elements with even indices: " << productEvenIndex << std::endl;
    std::cout << "Sum of elements between the first and last negative elements: " << sumBetweenFirstLastNeg << std::endl;

    delete[] arr;
    return 0;
}
