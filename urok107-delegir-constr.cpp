#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// ������������ �����������


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
		this->name = name + "-����";
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
		return name + ", ������� " + to_string(age)+ " ���, ��� " + to_string(weight) + " ��.\n";
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
	Human B("����");
	cout << B.getInfH();
	Human C("����", 30);
	cout << C.getInfH();
	Human D("Makc", 30, 67);
	cout << D.getInfH();
	system("pause");
}


