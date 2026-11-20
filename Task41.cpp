#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int students;
    int max = 0;
    int counter = 0;
    int length = 0;
    int bestlength = 0;
    int bestnumber = 0;

    cin >> students;
    if (students < 1 || students > 30)
    {
        cout << "Ошибка ввода";
        return 0;
    }
    for (int i = 1; i <= students; ++i)
    {
        int mark;
        cin >> mark;
        if (mark < 0 || mark > 10)
        {
            cout << "Ошибка ввода";
            return 0;
        }
        counter += mark;
        if (mark >= 8)
        {
            max += 1;
            length += 1;
            if (length > bestlength)
            {
                bestlength = length;
                bestnumber = i - bestlength + 1;
            }

        }
        else
        {
            length = 0;
        }
     }
    double a = static_cast<double>(counter) / students;
    cout << "Средняя оценка: " << fixed << setprecision(2) << a << "\n";
    cout << "Число студентов с оценкой не ниже 8: " << max << "\n";
    cout << "Длина: " << bestlength << "\n";
    cout << "Начало: " << bestnumber;
    

 

}