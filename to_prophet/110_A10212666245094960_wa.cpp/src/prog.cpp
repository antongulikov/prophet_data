#include <iostream>
#include <string>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif
    string s;
    cin >> s;
    int i,j=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='4' || s[i]=='7'){j++;}
    }
    
    while(j>0)
    {
        i=j%10;
        if(i!=4 && i!=7){cout << "NO";return 0;}
        j/=10;
    }
    cout << "YES";
    return 0;
}
