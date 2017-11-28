#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

void poisk(int *arr, int m, int *ires, int *nres);

int main() 
{
	setlocale(LC_ALL, "Rus");
	int *massiv, i, k, m;
	int ires=0, nres=1; // Начало и длина результата
	FILE *f;
	k = 1;
	while (k)
	{
		printf("Введите длину массива от 2 до 10: \n");
		scanf("%d", &m);
		k = m < 2 || 10 < m; // True, если введен неверный размер массива
		if (k)
		{
			printf("Введен неверный размер массива! Попробуйте еще раз...\n");	
		} 
	}
	massiv=(int*)malloc(m*sizeof(int));
	if((f=fopen("faip.txt", "r"))==0)
	{
		printf("Файл не открыт!\n"); 
		exit(1);
	}
	printf("Массив:\n");
	for(i=0; i<m; i++)
	{
		fscanf(f, "%d ", &massiv[i]);
		printf("%d ", massiv[i]);
	}
	fclose(f);

	poisk(massiv, m, &ires, &nres); // Функция поиска фрагмента

	printf("\nРезультат:\n");
	for (i=ires; i<(ires+nres); i++)
	{
		printf("%d ", massiv[i]);
	}
	free(massiv);
	getch();
	return 0;
}

void poisk(int *arr, int m, int *ires, int *nres)
{
	int i; 
	int itek=0, ntek=1; // Начало и длина текущего отрезка
	for(i=1; i<m; i++)
	{
		if ((arr[i]<0 && arr[i-1]>=0) || (arr[i]>=0 && arr[i-1]<0))
		{
			itek=i;
			ntek=1;
		} else
		{
			ntek++;
		}
		if (*nres<ntek)
		{
			*nres=ntek;
			*ires=itek;
		}
	}
}
