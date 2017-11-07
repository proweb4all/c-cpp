#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Pilesos
{
	public:
		// Конструктор
		Pilesos()
		{
			ch = 50;			
			cout << "--- Включили пылесос " << this << " в розетку (" << ch << "Гц)" << endl;
		}
		// Перегрузка конструктора
		Pilesos(int ch)
		{
			this->ch = ch; // Использование this
			cout << "--- Включили пылесос " << this << " в розетку (" << this->ch << "Гц)" << endl;
		}
		// Деструктор
		~Pilesos()
		{
			cout << "--- Выключили пылесос " << this << " из розетки (" << ch << "Гц)" << endl;
		}
		void Start(){
			CheckVolt() ? cout << "Вжжжжуххх!\n" : cout << "Бип! Бип!\n";
		}
		int getCh(){
			return ch;
		}
		
	private:
		int ch;
		bool CheckVolt(){
			int volt;
			cout << "Введите напряжение: ";
			cin >> volt;
			if (volt > 210)
				return 1;
			else
				return 0;
		}
};

	copyObj(Pilesos p){
	cout << "Копированием получен пылесос " << &p << ", включенный в розетку (" << p.getCh() << "Гц)" << endl;
	//return this;
}

int main()
{	
	setlocale(LC_ALL, "Rus");
	Pilesos A;
	A.Start();
	Pilesos B(60);
	B.Start();
	copyObj(B);
	//B.Start();
	system("pause");
}
