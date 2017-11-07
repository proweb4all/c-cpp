#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

using std::cout;
using std::cin;

template <int row, int col>
void funArray(int (&arr)[row][col])
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}

int main()
{	
	setlocale(LC_ALL, "Rus");
	int Arr[5][6]={
					{2,13,2,5,0,3},
					{12,3,5,0,7,5},
					{1,2,3,4,5,-4},
					{121,11,2,3,4,8},
					{3,5,3,7,9,12}
				   };

	funArray(Arr);
}
