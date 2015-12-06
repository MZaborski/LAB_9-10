#include "stdafx.h"
#include <iostream>

//********Podpunkta a*************

class Bazowa
{
	public:

	void  Wypisz()
	{
		std::cout << "Pochodze z klasy bazowej" << std::endl;
	}
};

class Pochodna : public Bazowa
{
	public:

	void Wypisz()
	{
		std::cout << "Pochodze z klasy pochodnej" << std::endl;
	}
};


//********/Podpunkt b*******
/*
class Bazowa
{
	public:

	void virtual Wypisz()
	{
		std::cout << "Pochodze z klasy bazowej" << std::endl;
	}
};

class Pochodna : public Bazowa
{
	public:
	
	void Wypisz() override
	{
		std::cout << "Pochodze z klasy pochodnej" << std::endl;
	}
};
*/

//**********Podpunkt c*********
/*
class Bazowa
{
	public:

	void virtual Wypisz() final
	{
		std::cout << "Pochodze z klasy bazowej" << std::endl;
	}
};

class Pochodna	: public Bazowa
{
	public:

	void Wypisz()
	{
		std::cout << "Pochodze z klasy pochodnej" << std::endl;
	}
};

*/

int main()
{

	Bazowa b;
	Pochodna p;

	b.Wypisz();
	p.Wypisz();

	Bazowa * bptr = & p;
	bptr->Wypisz();


	system("pause");
	return 0;
}

