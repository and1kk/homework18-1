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

    emp.surname = "��������";
    emp.birthYear = 1985;
    emp.position = "�������";
    emp.salary = 25000.50;
    emp.education = "����";

    cout << "�������: " << emp.surname << endl;
    cout << "г� ����������: " << emp.birthYear << endl;
    cout << "������: " << emp.position << endl;
    cout << "��������: " << emp.salary << endl;
    cout << "�����: " << emp.education << endl;

    return 0;
}
