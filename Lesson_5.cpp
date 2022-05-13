#include <iostream>
#include <string>
using namespace std;
//скелет функции - дать компилятору понять что есть такие функции
void PrintSome();
void Print_Some(string word, int result = 0);
void Plus(int num1, int num2);
float get_sum(float num1, float num2);//Записывается первая строка функции
int main()
{
	string words = "Four";
	int number = 10;
	setlocale(LC_ALL, "Russian");
	PrintSome();//Вызов
	Print_Some("One");//Передача значения в переменную word функции Print_Some
	Print_Some("Two");
	Print_Some(words);//Передача переменной words в функцию в переменную word 
	Plus(5, 6);//Передача значений в функцию Plus
	Plus(5, number);//Передача переменной
	float result = get_sum(4.5, 5.6);//Получаем значение из переменной result функции get_sum
	cout << result<<endl;
	cout << get_sum(5.0, 3.4) << endl;//Просто вывод результата без записи
	}
//Все функции должны быть записаны до функции main, что бы они работали, но есть скелет функции
//Пример функции, которая просто выводит текст
void PrintSome() {
	cout << "Переменная: ";
}
//Функция с передачей значения из main
void Print_Some(string word, int result = 0) {
	cout << word << result << endl;
}
//Функция с передачей целых чисел
void Plus(int num1, int num2) {
	int result = num1 + num2;
	Print_Some("Result: ", result); //Передача двух значений в функцию Print_Some, первое - стринг, второе резльтат 
	//подсчета 
}
//Функция с возвратом значения, какой тип данных укажем - такой и должен вернуться.
float get_sum(float num1, float num2) {//функия с типом float
	float result = num1 + num2;
	return result;//возврат переменной с типом float
}
//Понятие - перегрузка функций
void Plus(int num1, int num2); {

}
void Plus(int num1, int num2, int num3); {//две функции с одинаковым значением, работать будут в зависимости от количества 
	//переданного количества данных, если 2 числа - сработает первая функцияя, если три - вторая

}
plus(2, 3);//Первая
plus(3, 4, 5);//Вторая