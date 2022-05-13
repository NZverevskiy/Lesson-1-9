#include <iostream>
#include <string>
#include <vector>
using namespace std;

float get_avarage(int *arr, int size);//Скелет функции
float get_avarage(vector<int>* arr);//Скелет функции с массивом вектор
//Работа с одномерным массивом
int main()
{
	vector <int> prices = { 4,1,4,6,666,124,435 };
	int balance[] = { 5,23,100,99,1,0 };
	float avarage = get_avarage(balance, 6);
	cout << get_avarage(&prices);
	cout << avarage;
	return 0;
	}
//функция, принимающая одномерный массив в значение 
float get_avarage(int *arr, int size) {
	int i, sum = 0;
	float avg;
	for (i = 0; i < size; i++)
		sum += arr[i];
	avg = float(sum) / size;

	return avg;
}
//функция, принимающая вектор массив в значение 
float get_avarage(vector<int>*arr) {
	int sum = 0;
	float avg;
	for (float number:*arr)
		sum +=  number;
	avg = float(sum) / (*arr).size();

	return avg;
}