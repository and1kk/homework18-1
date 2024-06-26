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
    const int size = 5;  // ����� ������ ����������
    Employee employees[size] = {
        {"��������", 1955, "�������", 25000.50, "����"},
        {"��������", 1960, "���������", 30000.75, "����"},
        {"���������", 1988, "�������", 28000.00, "����"},
        {"���������", 1958, "��������", 27000.25, "����"},
        {"����������", 1970, "��������", 26000.80, "����"}
    };

    // ���������� ������� ���������� ������� �� 60 ���� � ��������� �� ���������
    int olderThan60Count = 0;

    cout << "���������� ������ �� 60 ����:" << endl;
    for (int i = 0; i < size; ++i) {
        if (2024 - employees[i].birthYear > 60) {
            olderThan60Count++;
            cout << "�������: " << employees[i].surname << endl;
            cout << "г� ����������: " << employees[i].birthYear << endl;
            cout << "������: " << employees[i].position << endl;
            cout << "��������: " << employees[i].salary << endl;
            cout << "�����: " << employees[i].education << endl;
            cout << endl;
        }
    }

    cout << "������ ���������� ������� �� 60 ����: " << olderThan60Count << endl;

    return 0;
}
