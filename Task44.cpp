#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int a = 0;
    cin >> n;
    if (n < 3 || n>9 || n % 2 == 0)
    {
        cout << "Ошибка ввода";
        return 0;

    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (n - j == j - 1 && n - i == i - 1)
            {
                cout << "X ";
            }
            else if (i == j)
            {
                cout << "\\ ";
            }
            else if (1 + n == i + j)
            {
                cout << "/ ";
            }
            else
            {
                cout << ". ";
                a++;

            }
            
        }
        cout << "\n";
    }
    cout << "Количество точек: " << a;
}


