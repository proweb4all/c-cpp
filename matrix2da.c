#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <malloc.h> 
void inpVector(int **arr, int n, int m); // Функция ввода элементов в вектор-матрицу из файла
void outVector(int **arr, int n, int m); // Функция вывода элементов вектора-матрицы
int findMaxCol(int **arr, int n, int m); // Функция поиска столбца с максимальной суммой положительных элементов
void printRes(int **arr, int n, int m, int jmax); // Функция вывода результатов работы

int main() 
{
	setlocale(LC_ALL, "Rus");
	int const MAXN = 9, MAXM = 9; // Максимальные размеры вектора-матрицы
	int N, M; // Размеры вектора-матрицы
	int **matrica; // Указатель на массив указателей
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

  	matrica = (int**)malloc(N * sizeof(int*)); // Динамический массив указателей на массивы строк матрицы
	
	// Ввод элементов в вектор-матрицу из файла
	inpVector(matrica, N, M);

	// Вывод элементов вектора-матрицы
	printf("Матрица %dx%d:\n", N, M);
	outVector(matrica, N, M);

	// Вывод результатов поиска столбца с максимальной суммой положительных элементов
	printRes(matrica, N, M, findMaxCol(matrica, N, M));

	// Освобождение динамической памяти
	for (i = 0; i < N; i++)
	{
		free(matrica[i]); // Динамические массивы строк матрицы
	}
	free(matrica); // динамияеский массив указателей на массивы строк матрицы
	
	system("pause");
	return 0;
}

// Функция ввода элементов в вектор-матрицу из файла -----------------------
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
		arr[i] = (int*)malloc(m * sizeof(int)); // Динамические массивы строк матрицы
		for (j = 0; j < m; j++)
		{
			fscanf(in, "%d ", &arr[i][j]); // Запись значения из файла в элемент матрицы
		}
	}
	fclose(in);
}

// Функция вывода элементов вектора-матрицы ---------------------------
void outVector(int **arr, int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d\t", arr[i][j]); // Вывод значения элемента матрицы
		}
		printf("\n");
	}
}

// Функция поиска столбца с максимальной суммой положительных элементов --------
int findMaxCol(int **arr, int n, int m)
{
	int sumj, // Сумма положительных элементов в текущем j-м столбце
		summax = 0, // Максимальная текущая сумма положительных элементов в столбцах
		jmax = -1, // Индекс столбца с максимальной суммой положительных элементов
		z, // Значение элемента в текущей итерации 
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

// Функция вывода результатов работы
void printRes(int **arr, int n, int m, int jmax)
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
			printf("%d ", arr[i][jmax]); // Значение элемента i-й строки jmax стольбца
		}
		printf("\n\n");
	}
}
