#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define l long long int
int main ()
{
//	freopen("test.txt","r",stdin);
	l n,d,prev,temp,ans=0,hold;
	cin>>n>>d;
	cin>>prev;
	for (short i=1;i<n;i++)
	{
		scanf("%d",&temp);
		if (temp <= prev)
		{
			hold = ceil((prev - temp + 1)*1.0 / d);
			ans+= hold;
			temp += hold*d;
		}
		prev = temp;
	}
	cout<<ans;
    return 0;
}
