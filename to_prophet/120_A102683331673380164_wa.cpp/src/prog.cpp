#include <iostream>

using namespace std;

int32_t main()
{
	string s;
	int n;
	cin >> s >> n;
	if (s == "front")
	{
		if (n == 1)
			cout << 'L';
		else
			cout << 'R';
	}
	else
	{
		if (n == 1)
			cout << 'R';
		else
			cout << 'L';
	}
	cout << endl;
	return 0;
}