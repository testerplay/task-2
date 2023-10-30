#include <iostream>
#include <Windows.h>
#include <cmatch>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ///Integer23.

int N;
cout << "Введіть кількість секунд (N): ";
cin >> N;

// Розраховуємо кількість хвилин, що минуло з початку останньої години.
int minutes = (N / 60) % 60;

cout << "Повних хвилин, що минули з початку останньої години: " << minutes << endl;

/////Boolean17.

int number2;

cout << "Введіть ціле додатне число: ";
cin >> number2;

bool isOddThreeDigit = (number2 >= 100 && number2 <= 999) && (number2 % 2 != 0);

if (isOddThreeDigit) {
    cout << "Введене число є непарним тризначним." << endl;
}
else {
    cout << "Введене число не є непарним тризначним." << endl;
}






////Мат. вирази 15
                float x = 0, y, num, denom;//Переменная с плавающей запятой
                cout << " Впишіть число: ";//Показ в консоли 
                cin >> x;//Считывает данные с консоли
                num = (log2(abs(x)) * pow(sin(x + 35), 2));
                //cout << "y" << calc(1526) << endl;
                denom = (pow(3, (x - 1)) * (sqrt((2 * 3.14159265358979323846 + ((1 / 2 * cos(x)), 3)))));//Знаменатель задания
                y = num / denom;//Деление Числителя на Знаменатель

                cout << " Відповідь: " << y;// Показ в консоли переменной y

         return 0;
           
}

       
    



   



