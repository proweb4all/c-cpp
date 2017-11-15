#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// Наследование - модификаторы доступа

using namespace std;


class A
{
public:
	A(){
		msg = "Конструктор А по умолчанию";
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
		cout << "Деструктор A" << endl;
	}
private:
	string msg;	
};

class B : public A
{
public:
//	B()
//	B():A()
	B():A("Конструктор А - переданное сообщение")
	{
		cout << "Конструктор B" << endl;
	}
	~B(){
		cout << "Деструктор B" << endl;
	}
};


int main()
{	
	setlocale(LC_ALL, "Rus");
	B b;
	system("pause");
}


