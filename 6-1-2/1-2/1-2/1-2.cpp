#include <iostream>

int main() {
    setlocale(0, ".1251");
    char cityCode;

    // Введення літери міста
    std::cout << "Введіть першу літеру міста: ";
    std::cin >> cityCode;

    // Імітація даних для міст
    int population;
    double area;

    if (cityCode == 'A') {
        population = 1000000;
        area = 500.5;
    }
    else if (cityCode == 'B') {
        population = 800000;
        area = 400.2;
    }
    else if (cityCode == 'C') {
        population = 1200000;
        area = 600.7;
    }
    else if (cityCode == 'D') {
        population = 500000;
        area = 300.9;
    }
    else if (cityCode == 'E') {
        population = 700000;
        area = 450.3;
    }
    else if (cityCode == 'F') {
        population = 900000;
        area = 550.6;
    }
    else if (cityCode == 'G') {
        population = 600000;
        area = 350.4;
    }
    else {
        std::cout << "Місто з введеною літерою не знайдено." << std::endl;
        return 1;
    }

    // Виведення результатів
    std::cout << "Населення: " << population << " осіб" << std::endl;
    std::cout << "Площа: " << area << " км^2" << std::endl;

    return 0;
}
