#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string getFromBD(){
	return "������ �� ��";
}
string getFromServer(){
	return "������ � �������";
}
string getFromSpace(){
	return "������ �� �������";
}
void showInfo(string (*foo)()){
	cout << foo() << endl;
}

int main(){
	setlocale(LC_ALL, "rus");
	showInfo(getFromBD);
	showInfo(getFromServer);
	showInfo(getFromSpace);
	system("pause");
    return 0;
}

