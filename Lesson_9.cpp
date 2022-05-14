#include <iostream>
#include<fstream>//Библиотека для работы с файлами(считывать данные с файла и записывать)
using namespace std;
#include<string>
int main()
{
	setlocale(LC_ALL, "Russian");
	ofstream file;
	string file_name;//,text;
	char text[100];
	cout<< "Введите название файла: ";
	cin >> file_name;     //ofstream::app - не перезаписывает файл, а дописывает данные
	file.open(file_name, ofstream::app);//Открытие файла с названием переменной(если такого файла не существует - создает)
	if (file.is_open() == true) {//Проверка на корректность открытия файла
		cout << "Введите текст: ";
		//cin >> text;//cin видит только текст до пробела
		cin.get();
		cin.getline(text, sizeof(text));
				file << text << endl;//записывает текст в переменной text в файл, другой текст после endl
	}
	else
		cout << "файл не был открыт! " << endl; 

	ifstream read_file;//библиотека ifstream позволяет считывать данные из файла
	read_file.open(file_name);
	if (read_file.is_open() == true) {
		char symbol;
		while (read_file.get(symbol));//Считывание с файла всего текст
		cout << symbol;
	}
	else
		read_file.exceptions(ifstream::badbit | ifstream::failbit);//какие типы ошибок мы будем ловить
		//исключение
		try {
		read_file.open(file_name);//если я тут получу ошибку то дальнейший код не пойдет, переход сразу в catch
		if (!read_file.is_open()) {
			throw "Ошибка при открытии файла! ";//выбрасывание произвольной ошибки
		}
		char symbol;
		while (read_file.get(symbol));//Считывание с файла всего текста
	}
	catch (const exception & ex) {//тут мы отслеживаем ошибки типа exceptions
		cout << ex.what() << endl;//вывод ошибки
	}
	catch (const char *ex) {//тут мы отслеживаем ошибки собственные из throw
		cout << ex << endl;//вывод массива ошибок
	}
		read_file.close();//Закрытие файла
	return 0;
}
