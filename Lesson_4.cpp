#include <iostream>
using namespace std;
#include <string>
#include <array>
#include <vector>
int main(){
{   //Первый вариант записи массива
    int nums[5];//Массив из 5 значений
    nums[0] = 5;//Присваивание первому значению числа
    nums[1] = 6;
    nums[2] = 7;
    nums[3] = 8;
    nums[4] = 9;
    cout << nums[0];

    //Второй вариант записи массива
    int Nums[] = {5,6,7,8,9};

    //массив string
    string names[] = { "Bob","Mike","John" };
    cout << names[1] << endl;

    //Многомерный массив
    int Members[2][3] = {//Массив состящий из двух массивов в каждом по 3 значения
        {5,6,7},//1массив
        {2,4,5},//2массив
    };
    int Memberz[2][3][3] = {//3 мерный массив
        {{5,6,7},{6,6,5},{7,3,5}},
        {{3,5,1},{2,4,1},{7,6,5}},
    };

    //Динамический массив
    int lenght;
    cout << "Enter lenght massive: ";
    cin >> lenght; 
    float* arr = new float[lenght];//пользователь сам указывает размер массива
    delete[] arr;

    //Масси array
    array<double, 5> name_massive; 
    name_massive = {5.12,6.24,1.24,5.35,1.42};

    //Массив vector
    vector<int> name_vec;//отличие от array - не надо указывать размер массива, только тип данных
    name_vec.resize(5);//Если надо задать или перезадать размер массива 

    //цикл for each
    for (double nem : name_massive) {//тип данных должен соответствовать типу данных в массиве
        cout << nem << endl; 
    }
}
