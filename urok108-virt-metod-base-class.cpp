#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// Вызов виртуального метода базового класса


using namespace std;

class Msg
{
	public:
		Msg(string msg)
		{
			this->msg = msg;
		}
	virtual string getMsg()
	{
		return msg;
	}
	private:
		string msg;
};

class BracketsMsg : public Msg 
{
	public:
		BracketsMsg(string msg) : Msg(msg)
		{
		}
		string getMsg()
		{
			return "[" + ::Msg::getMsg() + "]";
		}
};

class Printer
{
	public:
		void printMsg(Msg *msg)
		{
			cout << msg->getMsg() << endl;
		}
};



int main()
{	
	setlocale(LC_ALL, "Rus");

	Msg A("Hello!");
	BracketsMsg B("Hello!");
	Printer P;
	P.printMsg(&A);
	P.printMsg(&B);

	system("pause");
}


