#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string surname;
    int birthYear;
    string position;
    double salary;
    string education;
};

int main() {
    setlocale(0, "");
    const int size = 5;  // Розмір масиву працівників
    Employee employees[size] = {
        {"Іваненко", 1955, "Інженер", 25000.50, "Вища"},
        {"Петренко", 1960, "Програміст", 30000.75, "Вища"},
        {"Сидоренко", 1988, "Аналітик", 28000.00, "Вища"},
        {"Коваленко", 1958, "Менеджер", 27000.25, "Вища"},
        {"Михайленко", 1970, "Дизайнер", 26000.80, "Вища"}
    };

    // Визначення кількості працівників старших за 60 років і виведення їх відомостей
    int olderThan60Count = 0;

    cout << "Працівники старші за 60 років:" << endl;
    for (int i = 0; i < size; ++i) {
        if (2024 - employees[i].birthYear > 60) {
            olderThan60Count++;
            cout << "Прізвище: " << employees[i].surname << endl;
            cout << "Рік народження: " << employees[i].birthYear << endl;
            cout << "Посада: " << employees[i].position << endl;
            cout << "Зарплата: " << employees[i].salary << endl;
            cout << "Освіта: " << employees[i].education << endl;
            cout << endl;
        }
    }

    cout << "Всього працівників старших за 60 років: " << olderThan60Count << endl;

    return 0;
}
