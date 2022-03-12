#include "1kla$.h"
int main()
{
	wektor vec,ch;
	vec.siz(5);
	vec.mas[3] = 5;
	vec.siz(10);
	cout << vec.mas[3]<<endl;
	for (int i = 0; i < 10; ++i)
		vec.mas[i] = rand() % 10;
	vec.cort(0,vec.lastsize);
	for (int i = 0; i < 10; ++i)
	{
		cout << vec.mas[i] << " ";
	}
	cout << endl;
	vec.revers(0, vec.lastsize);
	for (int i = 0; i < 10; ++i)
	{
		cout << vec.mas[i] << " ";
	}
	return 0;
}