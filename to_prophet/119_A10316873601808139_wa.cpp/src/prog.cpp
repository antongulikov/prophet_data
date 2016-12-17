#include<iostream>
#include<string>

using namespace std;

int gcd(int a,int b)
{
    return b == 0 ? a : gcd(b,a%b);
}

int main()
{
    int a,b,n,g,r=0;
    cin>>a>>b>>n;
    while(!r)
    {
        if (n == 0)
        {
            r = 2;
            break;
        }
        g = gcd(a,n);
        a-=g;
        n-=g;
        if (n == 0)
            r = 1;
        g = gcd(b,n);
        b-=g;
        n-=g;
    }
    cout<<r-1<<endl;
    return 0;
}