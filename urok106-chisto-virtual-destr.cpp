#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// Чисто виртуальный деструктор, virtual-override


using namespace std;

class A
{
public:
	A(){
		cout << "Конструктор A" << endl;
	}
	virtual ~A() = 0;
};

A::~A(){
	cout << "Чисто виртуальный деструктор А" << endl;
};

class B : public A
{
public:
	B(){
		cout << "Конструктор B" << endl;
	}
	~B() override
	{
		cout << "Деструктор B" << endl;
	}
};


int main()
{	
	setlocale(LC_ALL, "Rus");

	A *b = new B;
	delete b;
	
	system("pause");
}


