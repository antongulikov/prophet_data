#include <iostream>
#include <cmath>

using namespace std;

int a[26], b[26], c[26], d[26];

int main()
{
	string s;
	int a;
	cin >> s >> a;
	if (a == 2)
		a = -1;
	if (s[0] == 'b')
		a *= -1;
	if (a == 1)
		cout << "L" << endl;
	else
		cout << "R" << endl;
	return 0;
}