#pragma once
#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char* s;
	short ktS;
	char* vved();
public:
	String();
	String(const String&);
	void nabirT();
	void Print() const;
	String& operator=(const String&);
	String& operator++();
	String operator++(int);
	String& operator--();
	String operator--(int);
	char& operator[](short);
	short operator()(char);
	explicit operator int();
	~String();
};
