#include "Pl.h"

short Pl::k = 0;
float Pl::PlTr1(float a, float b)
{
	k++;
	return (a*b)/2;
}

float Pl::PlTr2(float a, float b)
{
	k++;
	return (a * b) / 2;
}

float Pl::PlTr3(float a, float b, float c)
{
	k++;
	if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
		return 0;
	}
	float p = (a + b + c) / 2.0f;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

float Pl::Pram(float a, float b)
{
	k++;
	return a*b;
}

float Pl::Kv(float a)
{
	k++;
	return pow(a,2);
}

float Pl::Ro(float a, float b)
{
	k++;
	return (a*b)/2;
}

short Pl::pov_k()
{
	return k;
}
