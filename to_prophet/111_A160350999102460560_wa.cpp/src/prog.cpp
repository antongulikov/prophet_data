#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main()
{
	long long n, x, y;
	cin >> n >> x >> y;
	if (n > y)
	{
		cout << "-1" << endl;
		return 0;
	}
	long long sum = (n-y%n)*(y/n)*(y/n) + (y%n)*(y/n+1)*(y/n+1);
	if (sum < x)
	{
		cout << "-1" << endl;
		return 0;
	}
	for (long long i = 0; i < n - y%n; i++)
		cout << y/n << endl;
	for (long long i = 0; i < y%n; i++)
		cout << y/n+1 << endl;
	return 0;
}