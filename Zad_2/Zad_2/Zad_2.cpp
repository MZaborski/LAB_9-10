#include "stdafx.h"
#include <iostream>
#include <string>
#include "Generyczna.h"
using namespace std;

template <typename T> void dodaj(T a, T b)
{
	cout << "\nWynik dodawania: " << a << " + " << b << " = ";
	a = a + b;
	cout << a << endl;
}

template <typename T> void mnozenie(T a, T b)
{
	cout << "\nWynik mnozenia: " << a << " * " << b << " = ";
	a = a * b;
	cout << a << endl;
}


int main()
{
	cout << "\nDla int i float:\n";
	Generyczna <int, float> przyklad1(12, 3.492);
	przyklad1.wypisz();

	cout << "\nDla int i string:\n";
	Generyczna <int, string> przyklad2(123, "napis");
	przyklad2.wypisz();

	cout << "\nWYNIKI:\n";
	dodaj<int>(12, 7);
	mnozenie<double>(35.751, -41.52);

	system("pause");
	return 0;
}