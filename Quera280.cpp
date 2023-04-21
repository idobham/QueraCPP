#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[3];
	for (int i = 0; i < 3; i++)
		cin >> arr[i];

	size_t len = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + len);

	for (int i = 0; i < 3; i++)
		arr[i] *= arr[i];

	if (arr[0] + arr[1] == arr[2])
		cout << "YES";
	else
		cout << "NO";
	cout << endl;

	return 0;
}