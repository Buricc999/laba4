#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    long int  x;
    int a = 0;
    int b = 0;
    int best = 0;

    cin >> x;
    if (x < 0 || x > 2000000000)
    {
        cout << "Ошибка ввода";
        return 0;

    }
    if (x == 0)
    {
        cout << "Количество четных: " << 1 << "\n";
        cout << "Сумма нечётных: " << 0 << "\n";
        cout << "Наибольшая цифра: " << 0;
        return 0;

    }
    while (x != 0)
    {
        
        if ((x%10)%2 == 0)
        {
            a +=1;
        }
        else
        {
            b += x % 10;
        }
        if (x % 10 > best)
        {
            best = x % 10;
        }
        x = x / 10;

    }
    
    cout << "Количество четных: " << a << "\n";
    cout << "Сумма нечётных: " << b << "\n";
    cout << "Наибольшая цифра: " << best;
}

