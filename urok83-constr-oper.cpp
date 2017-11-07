#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Arr
{
	public:
		// Конструктор
		Arr()
		{	
			size = 5;
			data = new int[size];
			cout << "Вызван конструктор 1, создан Arr[" << size << "] " << this << endl;
			for(int i = 0; i < size; i++){
				data[i] = i;
				cout << data[i] << "\t";
			}
			cout << endl;
		}
		// Перегрузка конструктора
		Arr(const int size)
		{	
			this->size = size;
			data = new int[size];
			cout << "Вызван конструктор 2, создан Arr[" << size << "] " << this << endl;
			for(int i = 0; i < size; i++){
				data[i] = i;
				cout << data[i] << "\t";
			}
			cout << endl;
		}
		// Деструктор
		~Arr()
		{
			cout << "Вызван деструктор, освобождена память для Arr[" << size << "] " << this << endl;
			delete[] data;
		}
		// Конструктор копирования
		Arr(const Arr &other)
		{
			this->size = other.size;
			this->data = new int[other.size];
			cout << "Вызван конструктор копирования, создан Arr[" << size << "] " << this << endl;
			for(int i = 0; i < size; i++){
				this->data[i] = other.data[i];
				cout << this->data[i] << "\t";
			}
			cout << endl;
		}
		
	private:
		int size;
		int *data;
};

int main()
{	
	setlocale(LC_ALL, "Rus");
	Arr A;
	Arr B(8);
	Arr C(B);
	system("pause");
}
