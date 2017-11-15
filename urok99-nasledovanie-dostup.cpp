#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// ������������ - ������������ �������

using namespace std;


class A
{
	public:
		string msg1 = "��������� public";  
	private:
		string msg2 = "��������� private";  
	protected:
		string msg3 = "��������� protected";  
};

class B : public A
{
	public:
		void printMsg(){
			cout << msg1 << endl;
			//cout << msg2 << endl;
			cout << msg3 << endl;
		}
};

class C : protected A
{
	public:
		void printMsg(){
			cout << msg1 << endl;
			//cout << msg2 << endl;
			cout << msg3 << endl;
		}
};

int main()
{	
	setlocale(LC_ALL, "Rus");
	A a;
	B b;
	C c;
	cout << "--- ����������� ����� ���� ---\n"; 
	cout << "- �������� A.msg:\n" << a.msg1 << endl;
	cout << "- public B.msg:\n" << b.msg1 << endl;
	cout << "\n--- ����������� ����� ������ ---\n"; 
	cout << "- Public B.printMsg:\n";
	b.printMsg();
	cout << "- Protected C.printMsg:\n";
	c.printMsg();
	system("pause");
}


