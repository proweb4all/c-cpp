#include <iostream>
#include <cstdlib>
#include <string>
#include <string.h>
using namespace std;

int strLen(char *str){
	int i;
	for(i = 0; str[i] != '\0'; i++){};
	//i--;
	return i;
}

int main(){
	setlocale(LC_ALL, "rus");
	char *str = "";
	cout << strLen(str) << "\n";
	
	// ����� ��
	char str1[255] = "����";
	char *str2 = "������";
	strcat(str1, str2);
	cout << str1 << "\n";
	
	// ����� �++
	string str3 = "����";
	string str4 = "������";
	cout << "������� "+str3+" "+str4+", ����������� ���!\n";
	system("pause");
    return 0;
}

