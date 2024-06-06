#pragma once
#include<iostream>
using namespace std;
class Pl
{
protected:
	static short k;
public:
	static float PlTr1(float,float);//по двом катетам(прямокутний трикутник)
	static float PlTr2(float,float);//по площі і основі
	static float PlTr3(float,float,float);
	static float Pram(float,float);
	static float Kv(float);
	static float Ro(float,float);//площа ромба по двом діаг.
	static short pov_k();
};
