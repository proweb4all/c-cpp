#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <string.h> 

int main() 
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	system("cls");
	char s[80]; // Исходная строка
	char *slovo; // Текущее слово
	char c; // Начальный символ
	char *razd = " ,"; // Символы-разделители
	printf("Введите строку длиной до 80 символов:\n");
	gets(s);
  	printf("Введите начальный символ искомых слов:\n");
  	c = getchar();
  	int i, count = 0;
  	printf("Слова в исходной строке, начинающиеся на символ \'%c\':", c);

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


