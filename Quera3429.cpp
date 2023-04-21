#include <iostream>

using namespace std;

void TempChecker(int i)
{
	if (i > 100)
		cout << "Steam" << endl;
	else if (i < 0)
		cout << "Ice" << endl;
	else
		cout << "Water" << endl;
}


int main()
{
	int a;
	cin >> a;
	TempChecker(a);

	return 0;
}