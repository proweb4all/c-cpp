#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// ����������� ������, ����� ����������� �������, virtual-override


using namespace std;

class A
{
public:
	A(){
		cout << "����������� A" << endl;
	}
	virtual ~A(){
		cout << "���������� A" << endl;
	}
};

class B : public A
{
public:
	B(){
		cout << "����������� B" << endl;
	}
	~B() override
	{
		cout << "���������� B" << endl;
	}
};


int main()
{	
	setlocale(LC_ALL, "Rus");

	A *b = new B;
	delete b;
	
	system("pause");
}


