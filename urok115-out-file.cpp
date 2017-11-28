#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

// Вывод в файл
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Rus"); 
	SetConsoleOutputCP(1251); // Раскомментировать, если вывод символов в консоли не по-русски
    SetConsoleCP(1251); // Раскомментировать, если ввод символов в консоли не по-русски
	ofstream fout;
	string path = "myFile.txt";
	fout.open(path, ofstream::app);
	if (!fout.is_open())
	{
		cout << "Ошибка открытия файла " << path << endl;
	}
	else
	{
		cout << "Введите новые данные:" << endl;
		string newData;
		cin >> newData;
		fout << newData << endl;
	}
	fout.close();
	system("pause");
}


