#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Point
{
	public:
		int x;
		int y;
		void print2D(){
			cout << "Public: \tx=" << x << ", y=" << y << endl;
			printZ();
		};
	private:
		int z = 5;
		void printZ(){
			cout << "Private: \tz=" << z << "\t\n";
		}
	//protected:
};

int main()
{	
	setlocale(LC_ALL, "Rus");
	Point A;
	A.x = 3;
	A.y = 3;
	A.print2D();
	system("pause");
}
