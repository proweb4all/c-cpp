#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

int main() 
{
	setlocale(LC_ALL, "Rus");
	int *massiv, i, k, m;
	int ires=0, nres=1; // ������ � ����� ����������
	int itek=0, ntek=1; // ������ � ����� �������� �������
	FILE *f;
	k = 1;
	while (k)
	{
		printf("������� ����� ������� �� 2 �� 10: \n");
		scanf("%d", &m);
		k = m < 2 || 10 < m; // True, ���� ������ �������� ������ �������
		if (k)
		{
			printf("������ �������� ������ �������! ���������� ��� ���...\n");	
		} 
	}
	massiv=(int*)malloc(m*sizeof(int));
	if((f=fopen("input.txt", "r"))==0)
	{
		printf("���� �� ������!\n"); 
		exit(1);
	}
	printf("������:\n");
	for(i=0; i<m; i++)
	{
		fscanf(f, "%d ", &massiv[i]);
		printf("%d ", massiv[i]);
	}
	for(i=1; i<m; i++)
	{
		if ((massiv[i]<0 && massiv[i-1]>=0) || (massiv[i]>=0 && massiv[i-1]<0))
		{
			itek=i;
			ntek=1;
		} else
		{
			ntek++;
		}
		if (nres<ntek)
		{
			nres=ntek;
			ires=itek;
		}
	}
	printf("\n���������:\n");
	for (i=ires; i<(ires+nres); i++)
	{
		printf("%d ", massiv[i]);
	}
	free(massiv);
	getch();
	return 0;
}
