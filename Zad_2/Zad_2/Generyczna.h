#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class Generyczna
{
	public:

		Generyczna(T1 a, T2 b) :z1(a), z2(b)
		{
		}

		~Generyczna()
		{
		}

		T1 z1;
		T2 z2;

		void wypisz()
		{
			cout << "Pierwsza zmienna: " << z1 << endl;
			cout << "Druga zmienna: " << z2 << endl;
		}
};