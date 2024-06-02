#include "Sifr.h"

void Sifr::print()
{
	cout << this->t;
}

string Cez::sifr()
{
	cout << "\nVvedit velicinu zsuvu: ";
	cin >> zm;
	for (short i = 0; i < strlen(t.c_str()); i++)
	{
		t.at(i) = char((short(t.at(i))) + zm);
	}
	return t;
}

string Cez::desifr()
{
	cout << "\nVvedit velicinu zsuvu: ";
	cin >> zm;
	for (short i = 0; i < strlen(t.c_str()); i++)
	{
		t.at(i) = char((short(t.at(i))) - zm);
	}
	return t;
}

string Xor::sifr()
{
	cout << "\nVvedit kluch: ";
	cin >> zm;
	for (short i = 0; i < strlen(t.c_str()); i++)
	{
		t.at(i) = char((short(t.at(i))) ^ zm);
	}
	return t;
}

string Xor::desifr()
{
	cout << "\nVvedit kluch: ";
	cin >> zm;
	for (short i = 0; i < strlen(t.c_str()); i++)
	{
		t.at(i) = char((short(t.at(i))) ^ zm);
	}
	return t;
}