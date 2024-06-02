#pragma once
#include<iostream>
#include<string>
#include<conio.h>
#include<Windows.h>
using namespace std;
class Sifr
{
protected:
	string t;
public:
	Sifr(string s)
	{
		t = s;
	}
	virtual string sifr() = 0;
	virtual string desifr() = 0;
	void print();
};
class Cez: public Sifr
{
	short zm;
public:
	Cez(string s):Sifr(s)
	{
		zm = 0;
	}
	virtual string sifr();
	virtual string desifr();
};
class Xor: public Sifr
{
	short zm;
public:
	Xor(string s) :Sifr(s)
	{
		zm = 0;
	}
	virtual string sifr();
	virtual string desifr();
};

