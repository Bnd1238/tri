#include "1kla$.h"
double krug::s()
{
	return pi*r*r;
}
double krug::p()
{
	return 2 * pi * r;
}

void wektor::revers(int s,int f)
{
	for (int i = s; i < f/2; ++i)
	{
		swap(wektor::mas[i], wektor::mas[f - i]);
	}
}
void wektor::cort(int s, int f)
{
	for (int i = s; i < f; ++i)
	{
		for (int j = i; j < f; ++j)
		{
			if (wektor::mas[i] > wektor::mas[j])
			{
				swap(wektor::mas[i], wektor::mas[j]);
			}
		}
	}
}
void wektor::siz(int newsize)
{
	int s = lastsize;
	long long* b = new long long[s];
	for (int i = 0; i < s && i<newsize; ++i)
	{
		b[i] = mas[i];
	}
	delete[] mas;
	mas = new long long[newsize];
	for (int i = 0; i < s&&i<newsize; ++i)
	{
		mas[i] = b[i];
	}
	delete []b;
	lastsize = newsize;
}