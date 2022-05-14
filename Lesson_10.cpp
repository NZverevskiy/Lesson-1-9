#include <iostream>
#include "multiply.h"
using namespace std;
//макросы
#define USER_AGE 100
#define HAS_THIS_ONE
#define USER
int main()
{
	setlocale(LC_ALL, "Russian");
	//Работа с макросами
#ifdef HAS_THIS_ONE//Проверка - если такой макрос существует, то команда внутри выполнится
	cout << "macros: " << USER_AGE;
#endif
#ifndef USER_NAME//Проверка если такого макроса не существует, то выполнить команду внтури 
	cout << "Такого макроса не существует!" << endl;
#endif
	//функция по проверке макроса
	void print();
	//Работа с функциями из других файлов
	cout << "Суумма двух чисел равна: "<< mult(7,5) << endl;//Обработка функцией со второго файла
	cout << "Суумма трех чисел равна: " << mult(7, 5, 5) << endl;//Обработка функцией со второго файла
}
