#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string getFromBD(){
	return "Данные из БД";
}
string getFromServer(){
	return "Данные с сервера";
}
string getFromSpace(){
	return "Данные из космоса";
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

