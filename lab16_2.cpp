#include <iostream>
using namespace std;

char myString(char *x, int y)
{
	char *z = new char;
	for (int i = 0; i < y; i++)
	{
		z[i] = 'A' + i;
		cout << z[i];
	}
}
int main()
{
	char *p;
	int N;
	cout << "N = ";
	cin >> N;
	myString(p, N);
	cout << p;
	delete[] p;
	return 0;
}
