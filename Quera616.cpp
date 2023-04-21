#include <iostream>
#include <algorithm>

// this one works completely fine in microsoft visual studio 2022 enterprise, but on quera.org, I get compilation error which is rare
using namespace std;

int main()
{
	int a, b = 0;
	cin >> a;
	int org = a;
	for (int i = 0; a > 2; i++)
		if (a >= 2)
			a /= 2, b++;

	if (pow(2, b + 1) == org)
		b++;

	cout << pow(2, b + 1) << endl;

	return 0;
}