#include <iostream>
using namespace std;

int main()
{
    //Цикл For
    for (int i = 0; i < 10; i++)
        cout << i << endl;

    //Цикл While
    int i = 1; // Создание переменной
    while (i <= 10) { // Здесь только условие
        cout << i << endl;
        i++; // Увеличение переменной
    }

    //Цикл Do While
    int x = 13;
    do {
        x--;
        cout << i << endl;
    } while (x > 10);

    //Операторы в циклах
    for (int b = 1; b < 10; b++) {
        if (b % 20 == 0)
            continue;//если условие выполнено, то эта иттерация пропускается
        cout << "Число равно: " << b << endl;
    }
    for (int b = 1; b < 10; b++) {
        if (b % 20 == 0)
            break;//если условие выполнено, то цикл полностью завершаетсяы
    }
}