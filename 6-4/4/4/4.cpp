#include <iostream>
#include <cmath>

int main() {
    setlocale(0, ".1251");
    double a, b;

    // Введення значень a та b
    std::cout << "Введіть значення a: ";
    std::cin >> a;

    std::cout << "Введіть значення b: ";
    std::cin >> b;

    // Обчислення Z = sin(a) - b
    double Z = sin(a) - b;

    // Виведення результату
    std::cout << "Результат: " << Z << std::endl;

    return 0;
}