#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
// Агрегация и композиция

using namespace std;


class Cap{
	public:
		string getColor(){
			return color;
		}
	private:
		string color = "red";
};

class Human{
	public:
		void Think(){  // Делегирование
			brain.Think();
		}
		void viewCap(){
			cout << "Моя кепка цвета " << cap.getColor() << endl;
		}
	private:
		class Brain{ // Композиция
			public:
				void Think(){
					cout << "Я думаю..." << endl;
				}
		}; 
		Brain brain;
		Cap cap; // Агрегация
};

class Model{
	public:
		void viewModel(){
			cout << "Кепка манекена цвета " << cap.getColor() << endl;
		}
	private:
		Cap cap; // Агрегация
};

int main()
{	
	setlocale(LC_ALL, "Rus");
	Human human;
	human.Think();
	human.viewCap();				
	Model M;
	M.viewModel();
	system("pause");
}


