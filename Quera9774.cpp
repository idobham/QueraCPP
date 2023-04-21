#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int arr[100];
	//cout << str.size();
	for (int i = 0; i < str.size(); i++)
		arr[i] = (str[i] - 48);

	for (int i = 0; i < str.size(); i++)
	{
		cout << arr[i] << ": ";
		for (int j = 0; j < arr[i]; j++)
			cout << arr[i];
		cout << endl;
	}



	return 0;
}