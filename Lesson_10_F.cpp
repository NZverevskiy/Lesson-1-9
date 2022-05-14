//Файл, в котором хранятся сами функции
#include <iostream>
using namespace std;
int mult(int a, int b) {
	int res = a * b;
	return res;
}
int mult(int a, int b, int c) {
	int res = a * b * c;
	return res;
}
//Проверка макроса через функцию принт
//МАКРОС НЕ ВИДЕН в другом файле, в каком файле он создан - в том и будет обработка
void print() {
#ifdef USER
	cout << "Такой макрос существует" << endl;
#endif
#ifndef USER
	cout << "Такого макроса не существует" << endl;
#endif
}