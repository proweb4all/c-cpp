#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <malloc.h> 
void inpVector(int **arr, int n, int m); 
void outVector(int **arr, int n, int m); 
int findMaxCol(int **arr, int n, int m); 
void printRes(int **arr, int n, int jmax); 

int main() 
{
	setlocale(LC_ALL, "Rus");
	int const MAXN = 9, MAXM = 9; 
	int N, M; 
	int **matrica; 
	int i;
	int flag = 1;
	while (flag)
	{
		printf("Введите число строк и столбцов исходной матрицы от 1 до %d: ", MAXN);
		scanf("%d%d", &N, &M); 
		flag = N < 1 || N > MAXN || M < 1 || M > MAXM;
		if (flag) 
		{ 
			printf("Введен неверный размер матрицы! Попробуйте еще раз...\n");
		}
	}

  	matrica = (int**)malloc(N * sizeof(int*)); 
	inpVector(matrica, N, M);
	printf("Матрица %dx%d:\n", N, M);
	outVector(matrica, N, M);
	printRes(matrica, N, findMaxCol(matrica, N, M));
	for (i = 0; i < N; i++)
	{
		free(matrica[i]);
	}
	free(matrica);
	system("pause");
	return 0;
}
void inpVector(int **arr, int n, int m) 
{
	int i, j;
	FILE *in; 
	if ((in = fopen("input.txt", "r")) == 0) 
	{ 
		printf("Файл не открыт!"); 
		exit(1); 
	} 
	for (i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(m * sizeof(int)); 
		for (j = 0; j < m; j++)
		{
			fscanf(in, "%d ", &arr[i][j]); 
		}
	}
	fclose(in);
}
void outVector(int **arr, int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d\t", arr[i][j]); 
		}
		printf("\n");
	}
}
int findMaxCol(int **arr, int n, int m)
{
	int sumj, 
		summax = 0, 
		jmax = -1,
		z, 
		i, j;
	printf("Суммы положительных элементов столбцов:\n");
	for (j = 0; j < m; j++)	
	{ 
		sumj = 0; 
		for (i = 0; i < n; i++) 
		{
			if (arr[i][j] > 0)
			{
				sumj += arr[i][j];
			}
		}
		if (sumj > summax) 
		{
			summax = sumj;
			jmax = j;
		}
		printf("%d\t", sumj);
	}
	printf("\n------------------------------------------------------------------------------");
	return jmax;
}
void printRes(int **arr, int n, int jmax)
{
	int i;
	if (jmax < 0)
	{
		printf("\nМатрица не имеет положительных элементов\n");
	}
	else
	{
		printf("\nЭлементы столбца (индекс %d) с наибольшей суммой положительных элементов:\n", jmax);
		for (i = 0; i < n; i++)
		{
			printf("%d ", arr[i][jmax]); 
		}
		printf("\n\n");
	}
}
