#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

// ����� � ����
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Rus"); 
	SetConsoleOutputCP(1251); // �����������������, ���� ����� �������� � ������� �� ��-������
    SetConsoleCP(1251); // �����������������, ���� ���� �������� � ������� �� ��-������
	ofstream fout;
	string path = "myFile.txt";
	fout.open(path, ofstream::app);
	if (!fout.is_open())
	{
		cout << "������ �������� ����� " << path << endl;
	}
	else
	{
		cout << "������� ����� ������:" << endl;
		string newData;
		cin >> newData;
		fout << newData << endl;
	}
	fout.close();
	system("pause");
}


