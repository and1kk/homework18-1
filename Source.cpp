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


    employees[0] = { "��������", 1985, "�������", 25000.50, "����" };
    employees[1] = { "��������", 1990, "���������", 30000.75, "����" };
    employees[2] = { "���������", 1988, "�������", 28000.00, "����" };
    employees[3] = { "���������", 1982, "��������", 27000.25, "����" };
    employees[4] = { "����������", 1987, "��������", 26000.80, "����" };

    
    for (int i = 0; i < 5; ++i) {
        cout << "�������: " << employees[i].surname << endl;
        cout << "г� ����������: " << employees[i].birthYear << endl;
        cout << "������: " << employees[i].position << endl;
        cout << "��������: " << employees[i].salary << endl;
        cout << "�����: " << employees[i].education << endl;
        cout << endl;
    }

    return 0;
}
