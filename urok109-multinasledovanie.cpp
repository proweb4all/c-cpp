#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// ����� ������������ ������ �������� ������


using namespace std;

class Car
{
	public:
		string str1 = "����������";
		void drive()
		{	
			cout << "� ���!" << endl;
		}
};

class Airplane
{
	public:
		string str2 = "�������";
		void fly()
		{
			cout << "� ����!" << endl;
		}	
};

class FlyCar : public Car, public Airplane
{
	public:
		
};

int main()
{	
	setlocale(LC_ALL, "Rus");

//	Car c;
//	c.drive();
//	Airplane a;
//	a.fly();
	FlyCar fc;
	cout << fc.str1 << ": ";
	fc.drive();
	cout << fc.str2 << ": ";
	fc.fly();

	Car *ptrc = &fc;
	Airplane *ptra = &fc;
	
	cout << ptrc->str1 << ": ";
	ptrc->drive();
	cout << ptra->str2 << ": ";
	ptra->fly();
	
	

		
	system("pause");
}


