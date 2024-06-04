#include"Pl.h"
/*Завдання №1 
Створіть клас для підрахунку площі геометричних фігур. 
Клас повинен надавати функціональність для підрахунку площі трикутника за різними формулами, 
площі прямокутника, площі квадрата, площі ромба. 
Функції-члени для підрахунку площі повинні бути реалізовані за допомогою статичних функцій-членів. 
Також клас повинен читати кількість підрахунків площі і 
повертати це значення за допомогою статичної функції-члена.*/
int main()
{   
	string t;
	cout << "Vvedit tekst:\n";
	getline(cin,t);
	char var;
	Cez a(t);
	Xor b(t);
	do {
		system("cls");
		cout << "\tOberit bazanu diyu:\n";
		cout << "1 - vikonati sifruvanna tekstu sifrom \"cezara\";\n";
		cout << "2 - vikonati sifruvanna tekstu operacieyu XOR;\n";
		cout << "3 - rozsifruvati tekct sifrom \"cezara\";\n";
		cout << "4 - rozsifruvati tekct operacieyu XOR;\n";
		cout << "5 - vivesti tekst na ekran;\n";
		cout << "ESC - vihid;\n";
		var = _getch();
		switch (var)
		{
		case'1':system("cls");
			cout << "Vihidniy tekst:\n";
			a.print();
			cout << "\nZasifrovaniy tekst: " << a.sifr() << '\n';
			system("pause");
			break;
		case'2':system("cls");
			cout << "Vihidniy tekst:\n";
			b.print();
			cout << "\nZasifrovaniy tekst: " << b.sifr() << '\n';
			system("pause");
			break;
		case'3':system("cls");
			cout << "Vihidniy tekst:\n";
			a.print();
			cout << "\nRozsifrovaniy tekst: " << a.desifr() << '\n';
			system("pause");
			break;
		case'4':system("cls");
			cout << "Vihidniy tekst:\n";
			b.print();
			cout << "\nRozsifrovaniy tekst: " << b.desifr() << '\n';
			system("pause");
			break;
		case'5':system("cls");
			a.print();
			Sleep(3000);
			break;
		}
	} while (var != 27);
}