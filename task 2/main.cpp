#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    cout << "������ ��������� �����: ";
    cin >> number;

    if (number >= 100 && number <= 999) {
        // ��������� ����� � ����
        int hundreds = number / 100;
        int tens = (number / 10) % 10;
        int units = number % 10;

        // ������������� ����� ������ � �������
        //int newNumber = units + tens * 10 + hundreds * 100;
        int rev_num = 0;
        while (number > 0) {
            rev_num = rev_num * 10 + number % 10;
            number = number / 10;
        }

        cout << "����� ���� ������������: " << rev_num << endl;
    }
    else {
        cout << "������� ����� �� � ����������." << endl;
    }


        int number1;

        // �������� ������ �����, ������� �� 999
        cout << "������ ���� �����, ����� �� 999: ";
        cin >> number1;

        if (number1 <= 999) {
            cout << "������� ����� �� ����� �� 999." << endl;
        }
        else {
            // ��������� ����� � ������ ������
            int digit = (number1 / 100) % 10;

            cout << "����� � ������ ������: " << digit << endl;
        }


 
            int N;
            std::cout << "������ ������� ������ (N): ";
            std::cin >> N;

            // ����������� ������� ������, �� ������ � ������� �������� ������.
            int minutes = (N / 60) % 60;

            std::cout << "������ ������, �� ������ � ������� �������� ������: " << minutes << std::endl;

            return 0;
}

       
    



   



