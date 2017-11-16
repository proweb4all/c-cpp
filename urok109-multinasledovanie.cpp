#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// Вызов виртуального метода базового класса


using namespace std;

class Car
{
	public:
		Car()	
		{
			cout << "Конструктор Car" << endl;
		}
		~Car()	
		{
			cout << "Деструктор Car" << endl;
		}
		string str1 = "Автомобиль";
		void drive()
		{	
			cout << "Я еду!" << endl;
		}
};

class Airplane
{
	public:
		Airplane()	
		{
			cout << "Конструктор Airplane" << endl;
		}
		~Airplane()	
		{
			cout << "Деструктор Airplane" << endl;
		}
		string str2 = "Самолет";
		void fly()
		{
			cout << "Я лечу!" << endl;
		}	
};

class FlyCar : public Car, public Airplane
{
	public:
		FlyCar()	
		{
			cout << "Конструктор FlyCar" << endl;
		}
		~FlyCar()	
		{
			cout << "Деструктор FlyCar" << endl;
		}
		
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

//	Car *ptrc = &fc;
//	Airplane *ptra = &fc;
	
//	cout << ptrc->str1 << ": ";
//	ptrc->drive();
//	cout << ptra->str2 << ": ";
//	ptra->fly();
	
	

		
	system("pause");
}


