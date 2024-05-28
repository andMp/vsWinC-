#include"String.h"
/*Екзамен.
Створити програму для шифрування та дешифрування тексту за допомогою шифру Цезаря та шифру XOR. 
Використати для цього наслідування та абстрактні класи.*/
int main()
{   
	String a;
	String b;
	a.nabirT();
	b.nabirT();
	a.Print();
	b.Print();
	cout << a[3] << '\n';
	cout << b('b') << '\n';
	cout << "Operacia prefiksna '--':\n";
	a = --b;
	a.Print();
	b.Print();
}