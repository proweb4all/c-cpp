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
	char s[80]; // �������� ������
	char *slovo; // ������� �����
	char c; // ��������� ������
	char *razd = " ,"; // �������-�����������
	printf("������� ������ ������ �� 80 ��������:\n");
	gets(s);
  	printf("������� ��������� ������ ������� ����:\n");
  	c = getchar();
  	int i, count = 0;
  	printf("����� � �������� ������, ������������ �� ������ \'%c\':", c);

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


