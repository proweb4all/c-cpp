#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{	
	setlocale(LC_ALL, "Rus");
	for(int i = 0; i < argc; i++){
		cout << argv[i] << endl;
	}
	system("pause");
}
