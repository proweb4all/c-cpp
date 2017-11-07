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
	
	// Стиль Си
	char str1[255] = "Иван";
	char *str2 = "Иванов";
	strcat(str1, str2);
	cout << str1 << "\n";
	
	// Стиль С++
	string str3 = "Иван";
	string str4 = "Иванов";
	cout << "Товарищ "+str3+" "+str4+", поздравляем Вас!\n";
	system("pause");
    return 0;
}

