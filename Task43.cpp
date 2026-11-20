#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int goal;
    int a;
    int b = 0;
    int c = 0;
    cout << "Введите цель\n";
    cin >> goal;
    if (goal < 10 || goal > 500)
    {
        cout << "Ошибка ввода";
        return 0;
    }
    cout << "Вводите суммы\n";
    do
    {
        cin >> a;
        if (a >= 1 && a <= 100)
        {
            b += a;
            c += 1;
            if (b >= goal)
            {
                break;
            }
        }
        else
        {
            cout << "Повторите запрос\n";
        }
    } while (true);
    cout << "Количество принятых взносов: " << c << "\n";
    cout << "Собранная сумма: " << b << "\n";
    cout << "Превышение над целью " << b - goal;

}

