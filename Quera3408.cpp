#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str[100];
	int i;
	cin >> i;

	for (int a = 0; a < i; a++)
		cin >> str[a];

	for (int a = i - 1; a >= 0; a--)
		cout << str[a] << " ";

	cout << endl;

	return 0;
}