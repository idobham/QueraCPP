#include <iostream>

using namespace std;

int main()
{
	int arr[3];

	for (int i = 0; i < 3; i++)
		cin >> arr[i];

	int tri = 0;
	for (int i = 0; i < 3; i++)
		tri += arr[i];

	int nulldegcnt = 0;
	for (int i = 0; i < 3; i++)
		if (arr[i] == 0)
			nulldegcnt++;

	if (tri == 180 && nulldegcnt == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;


	return 0;
}