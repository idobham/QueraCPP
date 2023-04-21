#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int total = 0;
	
	for (int i = 0; i < 1;)
	{
		for (int j = 0; j < str.size(); j++)
		{
			total += str[j] - 48;
		}

		//cout << total;
		//cout << str;
		if (total >= 10)
		{
			str = to_string(total);
			total = 0;
		}
		else
			i++;

		//cout << str;
	}

	cout << total << endl;

	


	return 0;
}