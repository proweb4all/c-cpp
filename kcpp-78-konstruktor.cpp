#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:

		Point(int valueX, int valueY){
			x = valueX;
			y = valueY;
		}
		void SetX(int valueX){
			x = valueX;
		}
		void SetY(int valueY){
			y = valueY;
		}
		int GetX(){
			return x;
		}
		int GetY(){
			return y;
		}
		void Print(){
			cout << "x=" << x << "\ty=" << y << endl;
		}
};

int main(){
	setlocale(LC_ALL, "rus");

	Point a(4,4);
	a.Print();
	
	Point b(5,5);
	b.Print();
	
	Point c(7,7);
	c.Print();
		
	system("pause");
    return 0;
}

