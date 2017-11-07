#include <malloc.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <conio.h> 
#include <fstream> 
int main() 
{ 
int N, M, i, j, **A, k, s, *C, *S, h, m, q; 
FILE *in; 
if ((in = fopen("tas.txt", "r")) == 0) 
{ 
printf("Fail ne otkrit!"); 
exit(1); 
} 
k = 1; 
while (k) 
{ 
printf("Vvedite chislo strok i stolbcov ot 2 do 5:\n"); 
scanf("%d%d", &N, &M); 
if (N < 2 || N>5 || M<2 || M>5) 
{ 
k = 1; 
} 
else 
{ 
k = 0; 
} 
} 
A = (int**)malloc(N*M * sizeof(int)); 
for (i = 0; i < N; i++) 
{ 
for (j = 0; j < M; j++) 
{ 
fscanf(in, "%d ", &A[i][j]); 
} 
} 
printf("\nMassiv A:\n"); 
for (i = 0; i < N; i++) 
{ 
for (j = 0; j < M; j++) 
{ 
printf("%d ", A[i][j]); 
} 
printf("%c", '\n'); 
} 
C = (int*)malloc(M * sizeof(int)); 
for (j = 0; h = 0; j < M; j++) 
{ 
for (i = 0; i < N; i++) 
{ 
C[h] = A[i][j]; 
h++; 
} 
} 
S = (int*)malloc(N * sizeof(int)); 
for (m = 0; m < M; m++) 
{ 
S[m] = s; 
printf("Summa pologitelnih elementov stolbcov:\n", S[m]); 
for (k = 0; k < N; k++) 
{ 
if (C[k] >= 0) 
{ 
s += C[k]; 
} 
} 
} 
for (m = 1; m < M; m++) 
{ 
if (S[m] > S[m - 1]) 
{ 
q = S[m]; 
} 
} 
printf("Max summa:\n", q); 
_getch(); 
return 0; 
}
