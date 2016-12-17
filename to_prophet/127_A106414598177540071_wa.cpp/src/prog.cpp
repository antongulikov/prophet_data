#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,k;
    double sum = 0;
    double lastx,lasty,x,y;
    cin>>n>>k;
    cin>>lastx>>lasty;
    while(--n)
    {
        cin>>x>>y;
        sum += sqrt((lastx - x) * (lastx - x) + (lasty - y) * (lasty - y)) / 50.0;
        x = lastx;
        y = lasty;
    }
    printf("%.6lf\n",sum * k + 1e-8);
    return 0;
}
