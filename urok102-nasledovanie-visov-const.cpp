#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// ������������ - ������������ �������

using namespace std;


class A
{
public:
	A(){
		msg = "����������� � �� ���������";
		cout << msg << endl;
	}
	A(string msg){
		this->msg = msg;
		cout << msg << endl;
	}
	string getMsg(){
		return msg;		
	}
	~A(){
		cout << "���������� A" << endl;
	}
private:
	string msg;	
};

class B : public A
{
public:
//	B()
//	B():A()
	B():A("����������� � - ���������� ���������")
	{
		cout << "����������� B" << endl;
	}
	~B(){
		cout << "���������� B" << endl;
	}
};


int main()
{	
	setlocale(LC_ALL, "Rus");
	B b;
	system("pause");
}


