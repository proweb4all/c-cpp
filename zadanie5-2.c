#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <string.h> 
#include <windows.h>

int main() 
{
	setlocale(LC_ALL, "Rus"); 
	SetConsoleOutputCP(1251); // �����������������, ���� ����� �������� � ������� �� ��-������
    SetConsoleCP(1251); // �����������������, ���� ���� �������� � ������� �� ��-������
	char s[80]; // �������� ������
	char *slovo; // ������� �����
	char c; // ��������� ������
	char *razd = " ,"; // �������-�����������
	printf("������� ������ ������ �� 80 ��������:\n");
	gets(s);
  	printf("������� ��������� ������ ������� ����:\n");
  	c = getchar();
  	printf("����� � �������� ������, ������������ � ������� \'%c\':", c);
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
