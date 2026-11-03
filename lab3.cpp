#include <iostream>
#include <cctype>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);         
    SetConsoleOutputCP(1251);

    //Завдання 1
    cout << "Завдання 1" << endl;
    int N;
    cout << "Введіть тризначне додатне число N: ";
    cin >> N;

    if (N >= 100 && N <= 999) {
        int a = N / 100;       // сотні
        int b = N / 10 % 10;   // десятки
        int c = N % 10;        // одиниці
        int sum = 0;

        cout << "Цифри числа: " << a << ", " << b << ", " << c << endl;

        if (a < 7) sum += a;
        if (b < 7) sum += b;
        if (c < 7) sum += c;

        cout << "Сума цифр, менших за 7: " << sum << endl;
    }
    else {
        cout << "Помилка: число не є тризначним додатним!" << endl;
    }

    //Завдання 2 
    cout << endl << "Завдання 2" << endl;
    cout << "Доступні літери (англ. назви країн):" << endl;
    cout << "U - Ukraine, P - Poland, F - France, G - Germany," << endl;
    cout << "I - Italy, S - Spain, J - Japan" << endl;
    cout << "Введіть першу літеру назви країни: ";

    char ch;
    cin >> ch;
    ch = toupper(ch);

    switch (ch) {
    case 'U':
        cout << "Ukraine: столиця - Київ, населення ~ 38 млн" << endl;
        break;
    case 'P':
        cout << "Poland: столиця - Варшава, населення ~ 37,7 млн" << endl;
        break;
    case 'F':
        cout << "France: столиця - Париж, населення ~ 68 млн" << endl;
        break;
    case 'G':
        cout << "Germany: столиця - Берлін, населення ~ 84 млн" << endl;
        break;
    case 'I':
        cout << "Italy: столиця - Рим, населення ~ 59 млн" << endl;
        break;
    case 'S':
        cout << "Spain: столиця - Мадрид, населення ~ 48 млн" << endl;
        break;
    case 'J':
        cout << "Japan: столиця - Токіо, населення ~ 124 млн" << endl;
        break;
    default:
        cout << "Країну з такою літерою не знайдено." << endl;
    }

    return 0;
}