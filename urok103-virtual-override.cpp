#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// virtual-override

using namespace std;


class Gun
{
public:
	virtual void Shoot()
	{
		cout << "BANG!" << endl;
	}
};

class AutoGun : public Gun
{
public:
	void Shoot() override
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Bazuka : public Gun
{
public:
	void Shoot() override
	{
		cout << "BABAHhhh!!!" << endl;
	}
};

class Player
{
public:
	void Shoot(Gun *weapon)
	{
		weapon->Shoot();
	}
};

int main()
{	
	setlocale(LC_ALL, "Rus");
	Gun gun;
	AutoGun autogun;
	Bazuka bazuka;
	Player A;
	A.Shoot(&gun);
	A.Shoot(&autogun);
	A.Shoot(&bazuka);
	system("pause");
}


