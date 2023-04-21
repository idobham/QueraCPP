#include <iostream>


using namespace std;

int main()
{
	int arr[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}

	//for (int i = 0; i < 4; i++)
	//	cout << arr[i] << endl;

	if (arr[0] < arr[2])
		cout << "Right" << endl;
	else
		cout << "Left" << endl;
	


	return 0;
}