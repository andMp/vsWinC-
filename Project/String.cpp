#include "String.h"

String::String()
{
	this->s = nullptr;
	this->ktS = 0;
}

String::String(const String&k)
{
	this->ktS=k.ktS;
	this->s = (char*)malloc((ktS + 1) * sizeof(char));
	if (this->s !=nullptr) {
		strcpy_s(this->s, ktS + 1, k.s);
	}
}

void String::nabirT()
{
	cout << "Vvedit radok:\n";
	this->s=vved();
}

void String::Print() const
{
	cout << "Radok v yakomu " << this->ktS << " simvoliv: \n";
	cout << this->s<<'\n';
}

String& String::operator=(const String& copy)
{
	if (this != &copy)
	{
		if (this->s!=nullptr)
			free(this->s);
		this->ktS = copy.ktS;
		this->s = (char*)malloc((this->ktS+1) * sizeof(char));
		strcpy_s(this->s, ktS + 1, copy.s);
	}
	return *this;
}

String& String::operator++()
{
	this->s = (char*)realloc(this->s, this->ktS + 2);
	this->s[this->ktS] = ' ';
	this->s[this->ktS+1] = 0;
	this->ktS++;
	return *this;
}

String String::operator++(int a)
{
	String tmp = *this;
	this->s = (char*)realloc(this->s, this->ktS + 2);
	this->s[this->ktS] = ' ';
	this->s[this->ktS + 1] = 0;
	this->ktS++;
	return tmp;
}

String& String::operator--()
{
	if (this->ktS > 0)
	{
		this->s[this->ktS - 1] = 0;
		this->s = (char*)realloc(this->s, this->ktS);
		this->ktS--;
	}
	return *this;
}

String String::operator--(int)
{
	String tmp = *this;
	if (this->ktS > 0)
	{
		this->s[this->ktS - 1] = 0;
		this->s = (char*)realloc(this->s, this->ktS);
		this->ktS--;
	}
	return tmp;
}

char& String::operator[](short i)
{
	if (i < 0)
		return this->s[0];
	if (i > this->ktS-1)
		return this->s[ktS - 1];
	return this->s[i];
}
short String::operator()(char c)
{
	char* z = strchr(this->s, c);
	if (z!= nullptr)
		return (z-this->s);
	else
		return -1;
}
String::operator int()
{
	return int(this->ktS);
}

String::~String()
{
	free(this->s);
	this->s = nullptr;
}

char* String::vved()
{
	char* p = nullptr;
	char b;
	while ((b = getchar()) != '\n')
	{
		p = (char*)realloc(p, this->ktS + 1);
		p[this->ktS] = b;
		this->ktS++;
	}
	p = (char*)realloc(p, this->ktS + 1);
	p[this->ktS] = 0;
	return p;
}