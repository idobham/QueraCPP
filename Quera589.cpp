#include <iostream>

using namespace std;

int factoriel(int i)
{
	int a = 1;
	for (i; i > 0; i--)
		a *= i;
	return a;

}

int main()
{
	int i;
	cin >> i;
	cout << factoriel(i) << endl;
}