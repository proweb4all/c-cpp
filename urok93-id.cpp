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

class Point;
//class Human;

class Human{
	public:
		Human (){
			Count++;
			id = Count;
		};
		Human (string valname){
			this->name = valname;
			Count++;
			id = Count;
		};
		int getId(){
			return id;			
		};
		static int getCount(){
			return Count;
		}
		void drawP(Point &value);
		void upP(Point &value);
	private:
		static int Count;
		string name = "Noname";
		int id;
};

int Human::Count = 0;

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
		bool operator > (const Point & valP){
			return (this->x > valP.x);
		}
		bool operator >= (const Point & valP){
			return (this->x >= valP.x);
		}
		bool operator < (const Point & valP){
			return (this->x < valP.x);
		}
		bool operator <= (const Point & valP){
			return (this->x <= valP.x);
		}
		Point operator + (const Point & other){
			Point res;
			res.x = this->x + other.x; 
			res.y = this->y + other.y; 
			res.z = this->z + other.z; 
			return res;
		}
		Point operator - (const Point & other){
			Point res;
			res.x = this->x - other.x; 
			res.y = this->y - other.y; 
			res.z = this->z - other.z; 
			return res;
		}
		Point operator * (const Point & other){
			Point res;
			res.x = this->x * other.x; 
			res.y = this->y * other.y; 
			res.z = this->z * other.z; 
			return res;
		}
		Point operator / (const Point & other){
			Point res;
			if (other.x != 0) res.x = this->x / other.x; else res.x = 0; 
			if (other.y != 0) res.y = this->y / other.y; else res.y = 0; 
			if (other.z != 0) res.z = this->z / other.z; else res.z = 0; 
			return res;
		}
		Point & operator ++ (){
			this->x++;
			this->y++;
			this->z++;
			return *this;
		}
		Point & operator ++ (int val){
			Point temp(*this);
			this->x++;
			this->y++;
			this->z++;
			return temp;
		}
		Point & operator -- (){
			this->x--;
			this->y--;
			this->z--;
			return *this;
		}
		Point & operator -- (int val){
			Point temp(*this);
			this->x--;
			this->y--;
			this->z--;
			return temp;
		}
		void printAlarm(); // ����� ��� ������
	private:
		int x = 0;
		int y = 0;
		int z = 0;
	//protected:
		friend void nullP(Point &value); // ������������� �������
//		friend void Human::drawP(Point &value); // ������������� ����� ������� ������
		friend Human; // ������������� �����
};

void Point::printAlarm(){
	cout << "ALARM!" << endl;
};

void Human::drawP(Point &value){
	//cout << this->name << " ��������� ����� (" << ")\n";
	cout << this->id << " " << this->name << " ��������� ����� (" << value.x << "," << value.y << "," << value.z << ")\n";
};

void Human::upP(Point &value){
	value.x++;
	value.y++;
	value.z++;
	cout << this->id << " " << this->name << " ��������� ����� (" << value.x << "," << value.y << "," << value.z << ")\n";
};

void nullP(Point &value){
	value.x = 0;
	value.y = 0;
	value.z = 0;
}

int main()
{	
	setlocale(LC_ALL, "Rus");
//	Arr A;
//	Arr B(8);
//	Arr C(B);
//	C = B = A;

	Point A;
	cout << "A: ";
	A.printP();
	Point B(5,5,5);
	cout << "B: ";
	B.printP();
	Point C;
	cout << "C: ";
	C.printP();
	Point D(3,5,7);
	cout << "D: ";
	D.printP();
//	cout << "(A == B): " << (A == B) << endl;
//	cout << "(A != B): " << (A != B) << endl;
//	cout << "(A == C): " << (A == C) << endl;
//	cout << "---- ��������� ��������� > < >= <= �������� �� ���������� � ----\n";
//	cout << "(A > C): " << (A > C) << endl;
//	cout << "(A >= C): " << (A >= C) << endl;
//	cout << "(A < C): " << (A < C) << endl;
//	cout << "(A <= C): " << (A <= C) << endl;
//	cout << "(A > B): " << (A > B) << endl;
//	cout << "(A >= B): " << (A >= B) << endl;
//	cout << "(A < B): " << (A < B) << endl;
//	cout << "(A <= B): " << (A <= B) << endl;
//	cout << "---- �������������� ��������� + - * / ----\n";
//	cout << "(B + D): ";
//	(B + D).printP();
//	cout << "(B - D): ";
//	(B - D).printP();
//	cout << "(B * D): ";
//	(B * D).printP();
//	cout << "(B / D): ";
//	(B / D).printP();
//	cout << "��� ������� �� 0 ����� �������� 0\n";
//	cout << "(B / C): ";
//	(B / C).printP();
//	cout << "---- ��������� � ��������� ----\n";
//	cout << "++B: ";
//	(++B).printP();
//	cout << "--B: ";
//	(--B).printP();
//	cout << "B++: \n";
//	C = B++;
//	C.printP();
//	B.printP();
//	cout << "B--: \n";
//	C = B--;
//	C.printP();
//	B.printP();

	nullP(D);
	cout << "nullP(D): ";
	D.printP();
	D.printAlarm();
	cout << "����� " << Human::Count << endl;
	Human NN;
	cout << "����� " << Human::Count << endl;
	NN.drawP(D);
	NN.upP(D);
	Human MM("Feodor");
	cout << "����� " << Human::Count << endl;
	MM.drawP(B);
	cout << MM.getId() << " " << Human::getCount();
	system("pause");
}


