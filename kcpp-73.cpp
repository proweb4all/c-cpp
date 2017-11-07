#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Human
{
	public:
		string name;
		int age;
	
		void showH(){
			cout << "Имя: " << name << "\tВозраст: " << age << endl;
		}
		void bDay(){
			age++;
		}
		void reName(const string newN){
			name = newN;
		}
};

void copyStr(string &name, const string newN){
	name = newN;
}

int main(){
	setlocale(LC_ALL, "rus");

	Human firstH = {
		name : "Иван",
		age : 30
	};

	Human secondH;
	secondH.name = "Петр";
	secondH.age = 35;

	firstH.showH();
	secondH.showH();

	firstH.bDay();
	firstH.showH();

	secondH.reName("Федор");
	secondH.showH();
	
	Human thirdH;
	copyStr(thirdH.name, "Николай");
	thirdH.showH();
	

	system("pause");
    return 0;
}

