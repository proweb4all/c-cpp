#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <malloc.h> 
//using namespace std;
// Функция вывода элементов вектора-матрицы ---------------------------
void outVector(int *arr1, int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			*(arr1 + i * m + j) = i * 10 + j;
			printf("%d\t", *(arr1 + i * m + j)); // Вывод значения элемента матрицы по указателю (адресу)
		}
		printf("\n");
	}
}


int main() 
{
	setlocale(LC_ALL, "Rus");

	int i, j, rows, cols;
	int *arr;
	const int MAXN = 9;
	printf("Введите число строк и столбцов исходной матрицы от 1 до %d: ", MAXN);
	scanf("%d%d", &rows, &cols); 
	
  	arr = (int*)malloc(rows * cols * sizeof(int));

	outVector(arr, rows, cols);


/*for (i = 0; i < rows; i++){
	//	arr[i] = new int[cols];
	//	printf("%d\t", arr[i]);
		for (j = 0; j < cols; j++){
			*(arr + i * cols + j) = i * 10 + j;
			printf("%d\t", *(arr + i * cols + j));
		}
		printf("\n");
	}*/
  	free(arr);
  	//getchar();   
	//getchar();

/*	for (i = 0; i < rows; i++){
		delete [] arr[i];
	}
	delete [] arr;*/
	system("pause");
    return 0;
}
