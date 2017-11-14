#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
// Вложенные классы

using namespace std;

class Image{
	public:
		void getImage(){
			for (int i = 0; i < len; i++){
				cout << "#" << i << "_" << arr[i].getPixel();
			}
		}
		class Pixel{
			public:
				Pixel(){
					//len++;
				}
				Pixel(int r, int g, int b){
					//len++;
					this->r = r;
					this->g = g;
					this->b = b;
				}
				string getPixel(){
					return "Pixel(r,g,b): (" + to_string(r) + "," + to_string(g) + ","+ to_string(b) + ")\n";
				}
			private:
				int r = 0;
				int g = 0;
				int b = 0;
		};
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
	Image::Pixel B;
	Image::Pixel C(100,100,100);
	cout << "#B_" << B.getPixel();
	cout << "#C_" << C.getPixel();
		
	system("pause");
}


