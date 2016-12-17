#include <iostream>
#include <cstdio>
using namespace std;

int get(char c)
{
	switch(c)
	{
		case '6':
		{
			return 6;
			break;
		}
		case '7':
		{
			return 7;
			break;
		}
		case '8':
		{
			return 8;
			break;
		}
		case '9':
		{
			return 9;
			break;
		}
		case 'T':
		{
			return 10;
			break;
		}
		case 'J':
		{
			return 11;
			break;
		}
		case 'Q':
		{
			return 12;
			break;
		}
		case 'K':
		{
			return 13;
			break;
		}
		case 'A':
		{
			return 14;
			break;
		}
	}
}

int main()
{	
	char trump;
	cin >> trump;
	char val1, suit1, val2, suit2;
	cin >> val1 >> suit1;
	cin >> val2 >> suit2;
	if (suit1 == trump || suit2 == trump)
	{
		if (suit1 == trump && suit2 == trump)
		{
			if (get(val1) > get(val2))
				cout << "YES";
			else
				cout << "NO";
			return 0;
		}
		if (suit1 == trump && suit2 != trump)
		{
			cout << "YES";
			return 0;
		}
		if (suit1 != trump && suit2 == trump)
		{
			cout << "NO";
			return 0;
		}
	}
	else
	{
		if (get(val1) > get(val2))
			cout << "YES";
		else
			cout << "NO";
		return 0;
	}
}