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
	char s[80], c;
	printf("������� ������ ������ �� 80 ��������:\n");
	gets(s);
  	printf("������� ��������� ������ ������� ����:\n");
  	c = getchar();
  	int i, count = 0;
  	printf("����� � �������� ������, ������������ �� ������ \'%c\':", c);

	int first=1; // ������� ������ �����
	int flag=0; // ������� ������ �������

	for(i=0; s[i]!='\0'; i++)
	{
		if (first && (s[i] == c))
		{
			flag = 1;
			first = 0;
			printf("\n");
		}
		if ((s[i] == ' ') || (s[i] == ','))
		{
			first = 1;
			flag = 0;
		}else
		{
			first = 0;
		}
		if (flag)
		{
			printf("%c", s[i]);
		}
  	}
	printf("\n");
	system("pause");
  	return 0;	
}


