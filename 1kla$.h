#ifndef SIEG
#define SIEG
#include <iostream>
#include <math.h>
#include <stdio.h>
const double pi = acos(-1);
using namespace std;
class krug
{
	public:
		int r;
		double p();
		double s();

};
class wektor
{
	public:
		int lastsize=1;
		long long* mas = new long long[1];
		void revers(int s,int f);
		void cort(int s, int f);
		void siz(int newsize);
};
#endif
