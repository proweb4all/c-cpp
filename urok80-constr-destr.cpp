#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Pilesos
{
	public:
		// �����������
		Pilesos()
		{
			ch = 50;			
			cout << "--- �������� ������� " << this << " � ������� (" << ch << "��)" << endl;
		}
		// ���������� ������������
		Pilesos(int ch)
		{
			this->ch = ch; // ������������� this
			cout << "--- �������� ������� " << this << " � ������� (" << this->ch << "��)" << endl;
		}
		// ����������
		~Pilesos()
		{
			cout << "--- ��������� ������� " << this << " �� ������� (" << ch << "��)" << endl;
		}
		void Start(){
			CheckVolt() ? cout << "���������!\n" : cout << "���! ���!\n";
		}
		int getCh(){
			return ch;
		}
		
	private:
		int ch;
		bool CheckVolt(){
			int volt;
			cout << "������� ����������: ";
			cin >> volt;
			if (volt > 210)
				return 1;
			else
				return 0;
		}
};

	copyObj(Pilesos p){
	cout << "������������ ������� ������� " << &p << ", ���������� � ������� (" << p.getCh() << "��)" << endl;
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
