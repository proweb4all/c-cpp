#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Point
{
	public:
		int GetX(){
			return x;
		}
		void SetX(int valueX){
			x = valueX;
		}
		
		void print2D(){
			cout << "x=" << x << ", y=" << y;
			printZ();
		}
	private:
		int x;
		int y = 4;
		int z = 5;
		void printZ(){
			cout << ", z=" << z << "\n";
		}
	//protected:
};

int main()
{	
	setlocale(LC_ALL, "Rus");
	Point A;
	A.print2D();
	A.SetX(3);
	cout << "SetX(" << A.GetX() << ")\n";
	A.print2D();
	system("pause");
}
