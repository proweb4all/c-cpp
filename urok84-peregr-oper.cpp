#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
// ���������� ��������� == � !=

using namespace std;

class Arr
{
	public:
		// �����������
		Arr()
		{	
			size = 9;
			data = new int[size];
			cout << "������ ����������� 1, ������ Arr[" << size << "] " << this << " (" << this->data << ")" << endl;
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
			cout << "������ ����������� 2, ������ Arr[" << size << "] " << this << " (" << this->data << ")" << endl;
			for(int i = 0; i < size; i++){
				data[i] = i;
				cout << data[i] << "\t";
			}
			cout << endl;
		}
		// ����������
		~Arr()
		{
			cout << "������ ����������, ����������� ������ ��� Arr[" << size << "] " << this << " (" << this->data << ")" << endl;
			delete[] data;
		}
		// ����������� �����������
		Arr(const Arr &other)
		{
			this->size = other.size;
			this->data = new int[other.size];
			cout << "������ ����������� �����������, ������ Arr[" << size << "] " << this << " (" << this->data << ")" << endl;
			for(int i = 0; i < size; i++){
				this->data[i] = other.data[i];
				cout << this->data[i] << "\t";
			}
			cout << endl;
		}
		// �������� =
		Arr & operator = (const Arr &other)
		{
			if (this->data!=nullptr)
			{
				cout << "������ �������� =, ����������� ������ ��� Arr[" << this->size << "] " << this << " (" << this->data << ")" << endl;
				delete[] this->data;
			}
			this->size = other.size;
			this->data = new int[other.size];
			cout << "� Arr[" << this->size << "] " << this << " (" << this->data << ")" 
				 << " �������� Arr[" << other.size << "] " << &other << " (" << other.data << ")" << endl;
			for(int i = 0; i < size; i++){
				this->data[i] = other.data[i];
				cout << this->data[i] << "\t";
			}
			cout << endl;
			return *this;
		}
		
	private:
		int size;
		int *data;
};

class Point
{
	public:
		Point (){
		}
		Point (const int valueX, const int valueY, const int valueZ){
			x = valueX;
			y = valueY;
			z = valueZ;
		}
		int GetX(){
			return x;
		}
		int GetY(){
			return y;
		}
		int GetZ(){
			return z;
		}
		void SetX(int valueX){
			x = valueX;
		}
		void SetY(int valueY){
			y = valueY;
		}
		void SetZ(int valueZ){
			z = valueZ;
		}
		void printP(){
			cout << "x=" << x << ", y=" << y << ", z=" << z << "\n";
		}
		bool operator == (const Point & valP){
			return (this->x==valP.x && this->y==valP.y && this->z==valP.z);
		}
		bool operator != (const Point & valP){
			return (this->x!=valP.x || this->y!=valP.y || this->z!=valP.z);
		}
	private:
		int x = 0;
		int y = 0;
		int z = 0;
	//protected:
};

int main()
{	
	setlocale(LC_ALL, "Rus");
//	Arr A;
//	Arr B(8);
//	Arr C(B);
//	C = B = A;

	Point A;
	A.printP();
	Point B(5,5,5);
	B.printP();
	Point C;
	C.printP();
	cout << "(A == B): " << (A == B) << endl;
	cout << "(A != B): " << (A != B) << endl;
	cout << "(A == C): " << (A == C) << endl;

	system("pause");
}
