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
  
    Employee employees[5];


    employees[0] = { "Іваненко", 1985, "Інженер", 25000.50, "Вища" };
    employees[1] = { "Петренко", 1990, "Програміст", 30000.75, "Вища" };
    employees[2] = { "Сидоренко", 1988, "Аналітик", 28000.00, "Вища" };
    employees[3] = { "Коваленко", 1982, "Менеджер", 27000.25, "Вища" };
    employees[4] = { "Михайленко", 1987, "Дизайнер", 26000.80, "Вища" };

    
    for (int i = 0; i < 5; ++i) {
        cout << "Прізвище: " << employees[i].surname << endl;
        cout << "Рік народження: " << employees[i].birthYear << endl;
        cout << "Посада: " << employees[i].position << endl;
        cout << "Зарплата: " << employees[i].salary << endl;
        cout << "Освіта: " << employees[i].education << endl;
        cout << endl;
    }

    return 0;
}
