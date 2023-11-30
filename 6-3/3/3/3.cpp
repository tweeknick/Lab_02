#include <iostream>
#include <cmath>

void task1() {
    // Задача 1: Макарони Петрика
    double totalLength;
    std::cout << "Введіть довжину макаронів у кілометрах: ";
    std::cin >> totalLength;

    int day;
    std::cout << "Введіть номер дня (позитивне ціле число): ";
    std::cin >> day;

    if (day <= 0) {
        std::cout << "Неправильний номер дня." << std::endl;
        return;
    }

    double remainingLength = totalLength;
    for (int i = 1; i <= day; ++i) {
        remainingLength *= (i + 1.0) / i;
    }

    std::cout << "На " << day << " день залишилося " << remainingLength << " км макаронів." << std::endl;
}

void task2() {
    // Задача 2: Обчислення числа 𝜋 за допомогою ряду
    int terms;
    std::cout << "Введіть кількість доданків для обчислення числа 𝜋: ";
    std::cin >> terms;

    double pi_simple = 0.0;
    double pi_double = 0.0;

    for (int i = 0; i < terms; ++i) {
        double term = 1.0 / (2 * i + 1);
        if (i % 2 == 0) {
            pi_simple += term;
        }
        else {
            pi_simple -= term;
        }

        double double_term = 1.0 / (2.0 * i + 1.0);
        if (i % 2 == 0) {
            pi_double += double_term;
        }
        else {
            pi_double -= double_term;
        }
    }

    pi_simple *= 4.0;
    pi_double *= 4.0;

    std::cout << "Проста точність: " << pi_simple << std::endl;
    std::cout << "Подвійна точність: " << pi_double << std::endl;
}

void task3() {
    // Задача 3: Розклад на прості множники
    int number;
    std::cout << "Введіть натуральне число: ";
    std::cin >> number;

    if (number <= 0) {
        std::cout << "Неправильне введення." << std::endl;
        return;
    }

    std::cout << "Розклад числа " << number << " на прості множники: ";

    for (int i = 2; i <= number; ++i) {
        while (number % i == 0) {
            std::cout << i << " ";
            number /= i;
        }
    }

    std::cout << std::endl;
}

int main() {
    setlocale(0, ".1251");
    int taskNumber;

    while (true) {
        // Виведення меню
        std::cout << "\nВиберіть номер задачі (1, 2, 3), або 0 для виходу: ";
        std::cin >> taskNumber;

        // Обробка введеного номеру задачі
        switch (taskNumber) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 0:
            std::cout << "Дякуємо за користуванням програмою. Завершення роботи." << std::endl;
            return 0;
        default:
            std::cout << "Невірний номер задачі. Будь ласка, спробуйте ще раз." << std::endl;
        }
    }

    return 0;
}

