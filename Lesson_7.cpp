#include <iostream>
#include <string>
using namespace std;
//структура 
struct User {//создание структуры с определенными пунктами имя, фамилия, возраст, почта
    int age;
    string name;
    string surname;
    string mail;

    void setAll(string _name, string _surname, int _age) {//Присваивание тех же параметров но с упрощением
        name = _name;
        surname = _surname;
        age = _age;
    }

};
int main()
{
    //Присваивание пользователю админ характеристик
    User admin;
    admin.age = 30;
    admin.name = "Andrew";
    admin.surname = "Mishin";
    admin.mail = "Mishin@gmail.com";
    cout << admin.name << " " << admin.surname << " " << admin.age << " " << admin.mail << endl;
    User redactor;
    redactor.setAll("Nikita", "Ivanov", 25 );//Задаем через функцию
    cout << redactor.name << " " << redactor.surname << " " << redactor.age << endl;
}