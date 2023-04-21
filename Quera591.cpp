#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	//for (int j = 3; j <= 10; j++) {
	for (int i = 0; i < a; i++)
		cout << "*";
	cout << endl;
	//	int a = j - 2;
	a -= 2;
	for (int i = 0; i < a; i++)
	{
		cout << "*";
		for (int j = 0; j < a; j++)
			cout << " ";
		cout << "*";
		cout << endl;
	}

	a += 2;
	for (int i = 0; i < a; i++)
		cout << "*";
	//}


	return 0;
}