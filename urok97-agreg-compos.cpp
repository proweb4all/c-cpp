#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
// ��������� � ����������

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
		void Think(){  // �������������
			brain.Think();
		}
		void viewCap(){
			cout << "��� ����� ����� " << cap.getColor() << endl;
		}
	private:
		class Brain{ // ����������
			public:
				void Think(){
					cout << "� �����..." << endl;
				}
		}; 
		Brain brain;
		Cap cap; // ���������
};

class Model{
	public:
		void viewModel(){
			cout << "����� �������� ����� " << cap.getColor() << endl;
		}
	private:
		Cap cap; // ���������
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


