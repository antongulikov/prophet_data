#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int N=s.length();
    int count=0;
    for(int i=0; i<N; i++)
        if(s[i]=='4' || s[i]=='7')
            ++count;
    if((count%4==0 || count%7==0) && count!=0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}