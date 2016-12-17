#include <iostream>

using namespace std;
int n,x,ok,i;
int main()
{
    cin>>n;x=4;
    while(n)
    {
        x=n%10;
        if(x!=4&&x!=7)
            break;
        n=n/10;
    }
    if(n==0)
        cout<<"YES";
    else
    {
        if(n%4==0)ok++;
        if(n%7==0)ok++;
        if(n%47==0)ok++;
        if(n%74==0)ok++;
        if(n%44==0)ok++;
        if(n%77==0)ok++;
        if(n%444==0)ok++;
        if(n%447==0)ok++;
        if(n%474==0)ok++;
        if(n%744==0)ok++;
        if(n%774==0)ok++;
        if(n%747==0)ok++;
        if(n%477==0)ok++;
        if(n%777==0)ok++;
        if(ok)cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}
