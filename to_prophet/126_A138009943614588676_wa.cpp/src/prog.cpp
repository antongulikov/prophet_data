#include<cstdio>
#include<cmath>
using namespace std;

#define SIZE 100005
#define EPS 1e-9

double bin_search_1(double t1, int y1, double t2, double t0, int low, int high)
{
    int mid;
    double soln = -1, t;

    while(low<=high)
    {
        mid = (low+high)/2;
        if(!(y1+mid))
            break;

        t = (t1*y1+t2*mid)/(y1+mid);
        if(t>t0)
            soln = t, high = mid-1;
        else if(t<t0)
            low = mid+1;
        else
        {
            soln = t;
            break;
        }
    }

    return soln;
}

int bin_search_2(double t1, int y1, double t2, double t0, int low, int high)
{
    int mid, soln;
    double t;

    while(low<=high)
    {
        mid = (low+high)/2;
        if(!(y1+mid))
            break;

        t = (t1*y1+t2*mid)/(y1+mid);
        if(t>t0)
            high = mid-1;
        else if(t<t0)
            low = mid+1;
        else
            soln = mid, low = mid+1;
    }

    return soln;
}

void solve(int t1, int t2, int t0, int x1, int x2, int &y1, int &y2)
{
    int maxSum = 0, y, i;
    double minT = t2, T[SIZE];

    for(i = 0; i<=x1; ++i)
    {
        T[i] = bin_search_1(t1, i, t2, t0, 0, x2);
        if(T[i]>0 && minT>T[i])
            minT = T[i];
    }

    for(i = 0; i<=x1; ++i)
        if(fabs(T[i]-minT)<EPS)
        {
            y = bin_search_2(t1, i, t2, minT, 0, x2);
            if(maxSum<i+y)
                maxSum = i+y, y1 = i, y2 = y;
        }
}

int main()
{
    int t1, t2, t0, x1, x2, y1, y2;

    scanf("%d %d %d %d %d", &t1, &t2, &x1, &x2, &t0);

    solve(t1, t2, t0, x1, x2, y1, y2);
    printf("%d %d\n", y1, y2);

    return 0;
}
