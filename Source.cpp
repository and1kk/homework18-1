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
    Employee emp;

    emp.surname = "Іваненко";
    emp.birthYear = 1985;
    emp.position = "Інженер";
    emp.salary = 25000.50;
    emp.education = "Вища";

    cout << "Прізвище: " << emp.surname << endl;
    cout << "Рік народження: " << emp.birthYear << endl;
    cout << "Посада: " << emp.position << endl;
    cout << "Зарплата: " << emp.salary << endl;
    cout << "Освіта: " << emp.education << endl;

    return 0;
}
