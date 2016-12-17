#include<iostream>
#include<string>
#include<cctype>

using namespace std;
int main()
{
    string s,k;
    cin>>s;
    char x;
    int n=s.length();
    int i,m=0;
    for(i=0;i<n;i++)
    {x=toupper(s[i]);
        if(x!='A' && x!='E' && x!='I' && x!='O' && x!='U')
        {
            if(isupper(s[i]))
            k[m]=tolower(s[i]);
            else
            k[m]=s[i];
            m++;
        }
    }
    for(i=0;i<m;i++)
    {
        cout<<"."<<k[i];
    }
    return 0;
}
    
    