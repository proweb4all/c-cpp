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
			cout << "���: " << name << "\t�������: " << age << endl;
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
		name : "����",
		age : 30
	};

	Human secondH;
	secondH.name = "����";
	secondH.age = 35;

	firstH.showH();
	secondH.showH();

	firstH.bDay();
	firstH.showH();

	secondH.reName("�����");
	secondH.showH();
	
	Human thirdH;
	copyStr(thirdH.name, "�������");
	thirdH.showH();
	

	system("pause");
    return 0;
}

