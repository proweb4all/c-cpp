#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Pilesos
{
	public:
		void Start(){
			CheckVolt() ? cout << "���������!\n" : cout << "���! ���!\n";
		}
	private:
		bool CheckVolt(){
			int volt;
			cout << "������� ����������: ";
			cin >> volt;
			if (volt > 210)
				return 1;
			else
				return 0;
		};
};

int main()
{	
	setlocale(LC_ALL, "Rus");
	Pilesos A;
	A.Start();
	system("pause");
}
