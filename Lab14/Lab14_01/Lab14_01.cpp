#include <iostream>

template <class T>
double getAverage(T numbers[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += static_cast<double>(numbers[i]);
    }
    return sum / size;
}

int main() {
    system("chcp 1251");

    int arr1[]{ 1, 5, -5, 7, -9, 11 };
    long arr2[]{ 67295, 427295, 429456, 4297295, 429695, 4295 };
    double arr3[]{ 1.0, -3.6, 5.0, 7.7, -9.0, 11.0 };
    char arr4[]{ 'a', 'b', 'c', 'd', 'e', 'f' };

    std::cout << "Среднее арифметическое элементов массива int: " << getAverage(arr1, sizeof(arr1) / sizeof(arr1[0])) << std::endl;
    std::cout << "Среднее арифметическое элементов массива long: " << getAverage(arr2, sizeof(arr2) / sizeof(arr2[0])) << std::endl;
    std::cout << "Среднее арифметическое элементов массива double: " << getAverage(arr3, sizeof(arr3) / sizeof(arr3[0])) << std::endl;
    std::cout << "Среднее арифметическое элементов массива char: " << getAverage(arr4, sizeof(arr4) / sizeof(arr4[0])) << std::endl;

    return 0;
}
