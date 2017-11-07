#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 

void insFile(int n, int m, int const MIN_E, int const MAX_E); // ������� ���������� ����� ���������� ������ �������
void inpVector(int *arr, int n, int m); // ������� ����� ��������� � ������-������� �� �����
void outVector(int *arr, int n, int m); // ������� ������ ��������� �������-�������
int findMaxCol(int *arr, int n, int m); // ������� ������ ������� � ������������ ������ ������������� ���������
void printRes(int *arr, int n, int m, int jmax); // ������� ������ ����������� ������

int main() 
{
	setlocale(LC_ALL, "Rus");
	int const MIN_E = -100, MAX_E = 100; // �������� �������� ��������� �������-�������
	int const MAXN = 9, MAXM = 9; // ������������ ������� �������-�������
	int N, M; // ������� �������-�������
	int *matrica;
	printf("������������ ������ ������� ������� N � M �� 1 �� 9 ���������.\n");
	printf("��������� ��������� ��������� ����������:\n");
	printf("1. ��������� ���� input.txt ���������� ������ ������� �� ��������� [%d:%d]\n", MIN_E, MAX_E);
	printf("2. ��������� ������� �������� N*M ������ ������� �� ����� input.txt.\n");
	printf("3. ������� ������� � ������������ ������ ������������� ��������� � ������� ��.\n");
	printf("------------------------------------------------------------------------------\n");
	//����������� ������� �������-������� - ���� �������� � ���������� N � M
	int flag = 1;
	while (flag)
	{
		printf("������� ����� ����� � �������� �������� ������� �� 1 �� %d: ", MAXN);
		scanf("%d%d", &N, &M); 
		flag = N < 1 || N > MAXN || M < 1 || M > MAXM;
		if (flag) 
		{ 
			printf("������ �������� ������ �������! ���������� ��� ���...\n");
		}
	}

  	matrica = (int*)malloc(N * M * sizeof(int)); // ������������ ������-������-�������

	// ���������� ����� ���������� ������ �������
	insFile(N, M, MIN_E, MAX_E);

	// ���� ��������� � ������-������� �� �����
	inpVector(matrica, N, M);

	// ����� ��������� �������-�������
	printf("\n------------------------------------------------------------------------------\n");
	printf("������� %dx%d:\n", N, M);
	outVector(matrica, N, M);

	// ����� ����������� ������ ������� � ������������ ������ ������������� ���������
	printRes(matrica, N, M, findMaxCol(matrica, N, M));

	// ������������ ������������ ������
	free(matrica); 

	system("pause");
	return 0;
}
 
// ������� ���������� ����� ���������� ������ �������
void insFile(int n, int m, int const MIN_E, int const MAX_E)
{
	int i;
	FILE *in; 
	if ((in = fopen("input.txt", "w+")) == 0) 
	{ 
		printf("���� �� ������!"); 
		exit(1); 
	} 
	srand(time(NULL)); // ������������� ������� ��������� ��������� �����
	for (i = 0; i < n * m; i++) // ������ ��������� ����� ����� � ��������� (MIN_E:MAX_E) � ����
	{
		fprintf(in, "%d ", MIN_E + rand() % (MAX_E - MIN_E + 1));
	}
	fclose(in);
}

// ������� ����� ��������� � ������-������� �� ����� -----------------------
void inpVector(int *arr, int n, int m) 
{
	int i, j;
	FILE *in; 
	if ((in = fopen("input.txt", "r")) == 0) 
	{ 
		printf("���� �� ������!"); 
		exit(1); 
	} 
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
//			printf("%d\n", arr + i * m + j);
			fscanf(in, "%d ", arr + i * m + j); // ������ �������� �� ����� � ������� ������� �� ��������� (������)
		}
	}
	fclose(in);
}

// ������� ������ ��������� �������-������� ---------------------------
void outVector(int *arr, int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d\t", *(arr + i * m + j)); // ����� �������� �������� ������� �� ��������� (������)
		}
		printf("\n");
	}
}

// ������� ������ ������� � ������������ ������ ������������� ��������� --------
int findMaxCol(int *arr, int n, int m)
{
	int sumj, // ����� ������������� ��������� � ������� j-� �������
		summax = 0, // ������������ ������� ����� ������������� ��������� � ��������
		jmax = -1, // ������ ������� � ������������ ������ ������������� ���������
		z, // �������� �������� � ������� �������� 
		i, j;
	printf("����� ������������� ��������� ��������:\n");
	for (j = 0; j < m; j++)	
	{ 
		sumj = 0; 
		for (i = 0; i < n; i++) 
		{
			z = *(arr + i * m + j); // �������� �������� ��������, ������ �� ��������� (������)
			if (z > 0)
			{
				sumj += z;
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

// ������� ������ ����������� ������
void printRes(int *arr, int n, int m, int jmax)
{
	int i;
	if (jmax < 0)
	{
		printf("\n������� �� ����� ������������� ���������\n");
	}
	else
	{
		printf("\n�������� ������� (������ %d) � ���������� ������ ������������� ���������:\n", jmax);
		for (i = 0; i < n; i++)
		{
			printf("%d ", *(arr + i * m + jmax)); // �������� �������� i-� ������ jmax ��������
		}
		printf("\n\n");
	}
}
