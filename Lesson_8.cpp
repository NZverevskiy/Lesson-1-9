#include <iostream>
#include<string>
using namespace std;
enum cars {//создание базы машин
VOLVO,
BMW,
MARCEDES,
MAZDA,
FORD,
BUGATTI
};
struct User {
	string car;
};
int main()
{
	User admin;
	admin.car = cars::BMW;//выбор под пользователя, добавление его в структуру
	cout << admin.car;
}