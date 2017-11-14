#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
// Массив объектов класса

using namespace std;

class Pixel{
	public:
				Pixel(){
					r = g = b = 0;
				}
				Pixel(int r, int g, int b){
					this->r = r;
					this->g = g;
					this->b = b;
				}
				string getPixel(){
					return "Pixel(r,g,b): (" + to_string(r) + "," + to_string(g) + ","+ to_string(b) + ")\n";
				}
	private:
				int r, g, b;
};


class Image{
	public:
		void getImage(){
			for (int i = 0; i < len; i++){
				cout << "#" << i << "_" << arr[i].getPixel();
			}
		}
	private:
		static const int len = 5;
		Pixel arr[len] = {
			Pixel(10, 10, 10),
			Pixel(20, 20, 20),
			Pixel(30, 30, 30),
			Pixel(40, 40, 40),
			Pixel(50, 50, 50)
		};
};


int main()
{	
	setlocale(LC_ALL, "Rus");
	Image A;
	A.getImage();
	Pixel B;
	Pixel C(100,100,100);
	cout << "#B_" << B.getPixel();
	cout << "#C_" << C.getPixel();
	cout <<"----- Статический массив -----\n";
	const int len = 5;
	Pixel arr[len];
	arr[2] = Pixel(200,200,200);
	for (int i = 0; i < len; i++){
		cout << "#" << i << "_" << arr[i].getPixel();
	}
	cout <<"----- Динамичнский массив -----\n";
	int lend = 3;
	Pixel *arrd = new Pixel[lend];
	arrd[2] = Pixel(22,22,22);
	for (int i = 0; i < lend; i++){
		cout << "#" << i << "_" << arrd[i].getPixel();
	} 
	delete [] arrd;
				
	system("pause");
}


