#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <string.h> 
#include <windows.h>

int main() 
{
	setlocale(LC_ALL, "Rus"); 
	SetConsoleOutputCP(1251); // Раскомментировать, если вывод символов в консоли не по-русски
    SetConsoleCP(1251); // Раскомментировать, если ввод символов в консоли не по-русски
	char s[80]; // Исходная строка
	char *slovo; // Текущее слово
	char c; // Начальный символ
	char *razd = " ,"; // Символы-разделители
	printf("Введите строку длиной до 80 символов:\n");
	gets(s);
  	printf("Введите начальный символ искомых слов:\n");
  	c = getchar();
  	printf("Слова в исходной строке, начинающиеся с символа \'%c\':", c);
    slovo = strtok(s, razd);
    while(slovo){
        if (slovo[0] == c)
		{
			printf("\n%s",slovo);
		}
        slovo = strtok(NULL, razd);
    }
	printf("\n");
	system("pause");
  	return 0;	
}
