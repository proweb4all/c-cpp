#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string>
// Абстрактные классы, чисто виртуальные функции, virtual-override


using namespace std;

class Weapon
{
public:
	void Ura()
	{
		cout << "УРА!!!\t";
	}
	virtual void Shoot() = 0;
};

class Gun : public Weapon
{
public:
	void Shoot() override
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

class Bazuka : public Weapon
{
public:
	void Shoot() override
	{
		cout << "BABAHhhh!!!" << endl;
	}
};

class Knife : public Weapon
{
public:
	void Shoot() override
	{
		cout << "VJUH! VJUH!!!" << endl;
	}
};

class Player
{
public:
	void Shoot(Weapon *weapon)
	{
		weapon->Ura();
		weapon->Shoot();
	}
};

int main()
{	
	setlocale(LC_ALL, "Rus");
	Gun gun;
	AutoGun autogun;
	Bazuka bazuka;
	Knife knife;
	Player A;
	A.Shoot(&gun);
	A.Shoot(&autogun);
	A.Shoot(&bazuka);
	A.Shoot(&knife);
	system("pause");
}


