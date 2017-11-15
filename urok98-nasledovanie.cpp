#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
// Наследование

using namespace std;


class Human
{
	public:
		string getName(){  
			return name;
		}
		void setName(string name){
			this->name = name;
		}
	private:
		string name = "Noname";
};

class Student : public Human
{
	public:
		string group = "очник";
		void Learn(){
			cout << "Я студент-" << group << endl;
		}
	private:
};

class Z_Student : public Student
{
	public:
		string group = "заочник";
		void Learn(){
			cout << "Я студент-" << group << endl;
		}
	private:
};

int main()
{	
	setlocale(LC_ALL, "Rus");
	Human human;
	cout << human.getName() << endl;
	Student st;				
	st.setName("Fedor");
	cout << st.getName() << " - ";
	st.Learn();
	Z_Student zst;				
	zst.setName("Max");
	cout << zst.getName() << " - ";
	zst.Learn();
	system("pause");
}


