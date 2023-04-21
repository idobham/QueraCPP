#include <iostream>

using namespace std;

int main()
{
	int arr[4];
	for (int i = 0; i < 4; i++)
		cin >> arr[i];

	int Sugar = (arr[0] - arr[1]), Salt = (arr[2] - arr[3]);
	//cout << Sugar << endl << Salt << endl;
	if (Sugar > Salt)
		cout << "Shekarestan" << endl;
	else if (Salt > Sugar)
		cout << "Namakestan" << endl;
	else if (Sugar == Salt)
		cout << "Equal" << endl;


	return 0;
}