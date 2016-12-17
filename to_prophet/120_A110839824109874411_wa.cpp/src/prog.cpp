#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <ctype.h>

using namespace std;

int main()
{
	
	string e;
	cin >> e;
	
	int r;
	cin >> r;
	if(e[0] == 'f')
	{
		if(r == 1 )
			cout << "L";
		else
			cout << "R";
	}
	else
	{
		if ( r == 1 )
			cout << "R";
		else
			cout << "L";
		}
	
	
	
		
 return 0;
}
 
