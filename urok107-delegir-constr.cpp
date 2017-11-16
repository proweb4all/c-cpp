#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// Делегирующий конструктор


using namespace std;

class Human
{
public:
	Human()
	{
		name = "Noname";
		age = 0;
		weight = 0;
	}
	Human(string name):Human()
	{
		this->name = name + "-джан";
	}
	Human(string name, int age):Human(name)
	{
		this->age = age;
	}
	Human(string name, int age, int weight):Human(name,age)
	{
		this->weight = weight;
	}
	string getInfH()
	{
		return name + ", возраст " + to_string(age)+ " лет, вес " + to_string(weight) + " кг.\n";
	}
private:
	string name = "XXX";
	int age = -1;
	int weight = -1;
};


int main()
{	
	setlocale(LC_ALL, "Rus");

	Human A;
	cout << A.getInfH();
	Human B("Вася");
	cout << B.getInfH();
	Human C("Федя", 30);
	cout << C.getInfH();
	Human D("Makc", 30, 67);
	cout << D.getInfH();
	system("pause");
}


