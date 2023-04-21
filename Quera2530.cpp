#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int cnt = 1, arr[4] = { 0 };

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'T')
			arr[0] += 2;
		else if (str[i] == 'D')
			arr[1] += 2;
		else if (str[i] == 'L')
			arr[2] += 2;
		else if (str[i] == 'F')
			arr[3] += 2;
	}
	
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == 0)
			arr[i]++;
		cnt *= arr[i];
	}

	if (cnt < 2)
		cnt = 0;
	
	cout << cnt << endl;

	return 0;
}