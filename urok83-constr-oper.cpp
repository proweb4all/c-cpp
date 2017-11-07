#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Arr
{
	public:
		// �����������
		Arr()
		{	
			size = 5;
			data = new int[size];
			cout << "������ ����������� 1, ������ Arr[" << size << "] " << this << endl;
			for(int i = 0; i < size; i++){
				data[i] = i;
				cout << data[i] << "\t";
			}
			cout << endl;
		}
		// ���������� ������������
		Arr(const int size)
		{	
			this->size = size;
			data = new int[size];
			cout << "������ ����������� 2, ������ Arr[" << size << "] " << this << endl;
			for(int i = 0; i < size; i++){
				data[i] = i;
				cout << data[i] << "\t";
			}
			cout << endl;
		}
		// ����������
		~Arr()
		{
			cout << "������ ����������, ����������� ������ ��� Arr[" << size << "] " << this << endl;
			delete[] data;
		}
		// ����������� �����������
		Arr(const Arr &other)
		{
			this->size = other.size;
			this->data = new int[other.size];
			cout << "������ ����������� �����������, ������ Arr[" << size << "] " << this << endl;
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
