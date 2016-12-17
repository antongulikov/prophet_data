#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <queue>
#include <vector>
#include <algorithm>
#include <cctype>
#include <fstream>
#include <map>
#include <list>
#include <set>
#include <stack>

#define sz 100
#define pb(a) push_back(a)
#define pp pop_back()
#define ll long long
#define fread freopen("input.txt","r",stdin)
#define fwrite freopen("output.txt","w",stdout)
#define inf (1<<30-1)
#define chng(a,b) a^=b^=a^=b;
#define clr(abc,z) memset(abc,z,sizeof(abc))
#define PI acos(-1)
using namespace std;

int l[200], r[200];

int main()
{
    int n, p[3], t[2], con=0, dif, now;

    scanf("%d", &n);

    for (int i = 0; i<3; i++)
        scanf("%d", &p[i]);
    for (int i = 0; i<2; i++)
        scanf("%d", &t[i]);
    p[1]+=p[0];
    for (int i = 0; i<n; i++)
        scanf("%d %d", &l[i], &r[i]);

    if(n==1)
    {
        printf("%d", (r[0]-l[0])*p[0]);
        return 0;
    }

    for (int i = 0; i<n; i++)
        con+=((r[i] - l[i])*p[0]);

    for (int i = 1; i<n; i++)
    {
        dif = l[i] - r[i-1];
        now = 0;
        if(dif>t[1])
        {
            now += (t[0]*p[0]);
            now += ((t[1]-t[0])*p[1]);
            now += ((dif - t[1])*p[2]);
        }
        else if (dif>t[0])
        {
            now += ((dif - t[0])*p[1]);
            now += (t[0]*p[0]);
        }
        else now += ((dif)*p[0]);
        con+=now;
    }

    printf("%d", con);


    return 0;
}
