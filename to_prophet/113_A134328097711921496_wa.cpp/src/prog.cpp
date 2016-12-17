//Bismillahir Rahmanir Rahim
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<cassert>
#include<cstdlib>
#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
#include<stack>
#include<list>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<bitset>
#include<ctime>
using namespace std;

#define i64 long long int
#define u64 unsigned long long int

#define fin(a) freopen(a,"r",stdin)
#define fout(a) freopen(a,"w",stdout)

#define repc(i,a,b) for(__typeof(b) i=(a); i<=(b); i++)
#define repr(i,a,b) for(__typeof(b) i=(a); i>=(b); i--)

#define clr(a) a.clear()
#define sz(a) (int)a.size()
#define mem(a,b) memset(a,b,sizeof a)
#define ERASE(a) a.erase(a.begin(),a.end())

#define sc scanf
#define S(z) scanf("%d",&z)
#define SL(z) scanf("%I64d",&z)
#define S2(xx,zz) scanf("%d %d",&xx,&zz)
#define SL2(xx,zz) scanf("%I64d %I64d",&xx,&zz)
#define SC(z) scanf("%s",&z)

#define pf printf
#define pfn printf("\n")
#define PF(z) printf("%d",z)
#define PFL(z) printf("%I64d",z)
#define PF2(x,y) printf("%d %d",x,y)
#define PFL(z) printf("%I64d",z)
#define PFS(z) printf("%s",z)

#define ff first
#define ss second
#define mp m_p make_pair

#define MI map<int,int>
#define MSI map<string,int>
#define MIS map<int,string>
#define SI set<int>
#define SS set<string>
#define SMI multiset<int>
#define VI vector<int>
#define VI2 vector < vector < int > >
#define QU queue<int>
#define PQU priority_queue<int>
#define STK stack<int>
#define pb push_back

#define inf 2000000000
#define pi  acos(-1.0)
#define MAX 1000007
#define MOD 1000000007
#define eps 1e-9

template <class T>T sqr(T x) {return x*x;}
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template <class T> inline T bigmod(T p,T e,T M)
{
    if(e==0) return 1;
    if(e%2==0){i64 t=bigmod(p,e/2,M);return (T)((t*t)%M);}
    return (T)((i64)bigmod(p,e-1,M)*(i64)p)%M;
}
template <class T> inline T bigexp(T p,T e)
{
    if(e==0)return 1;
    if(e%2==0){i64 t=bigexp(p,e/2);return (T)((t*t));}
    return (T)((i64)bigexp(p,e-1)*(i64)p);
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

int dx4[]={1,0,-1,0};int dy4[]={0,1,0,-1}; //4 Direction
int dx8[]={1,1,0,-1,-1,-1,0,1};int dy8[]={0,1,1,1,0,-1,-1,-1};//8 direction
int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
/*
struct Graph
{
    int u,v,w;
    bool operator<(const Graph& p)
    const {return w<p.w;} // oporerta chotor jnne
}edge[10];

vector<int>edges,cost;
int l=lower_bound(a+1,a+5,4)-a;
///amake 1 theke 5 tomo index porjnto search dibe. jdi match khay taile oi index i or na match khele 1 add kore dibe.
int u=upper_bound(a+1,a+5,18)-a;
///amake 1 theke 5 tomo index porjnto search dibe. match hok r na hok 1 add kore dibe.
//***last e ekta extra largest element both khetre add korte hbe.
struct compare
{
    bool operator()(const int&l,const int&r)
    {
        return l>r;
    }
};
priority_queue<int,vector<int>,compare>pq;
*/
/******************* Code Starts here *******************/

char s[300005],p[300005];
int l,ma,mn,mv,fa,fn,fv,w,to;

int main()
{
    gets(s);
    l=strlen(s);
    int t=-1;
    bool bl=false,bl1=false;
    for(int i=0;i<=l;i++)
    {
        if(s[i]==' ' || s[i]=='\0')
        {
            to++;
            p[++t]='\0';
            bl=false;
            if(t>=4 && bl==false)
            {
                if(p[t-1]=='s' && p[t-2]=='o' && p[t-3]=='i' && p[t-4]=='l')
                {
                    ma++;
                    if(mn>0 || (fa+fn+fv>0) || mv>0)
                    {

                       bl1=true;break;
                    }
                    bl=true;
                    w++;
                }
            }
            if(t>=4 && bl==false)
            {
                if(p[t-1]=='a' && p[t-2]=='r' && p[t-3]=='t' && p[t-4]=='e')
                {
                    fn++;
                    if(fv>0 || (ma+mn+mv>0) || fn>1)
                    {
                        bl1=true;break;
                    }
                    bl=true;
                    w++;
                }
            }
            if(t>=5 && bl==false)
            {
                if(p[t-1]=='a' && p[t-2]=='l' && p[t-3]=='a' && p[t-4]=='i' && p[t-5]=='l')
                {
                    fa++;
                    if(fv>0 || (ma+mn+mv>0) || fn>0)
                    {
                        bl1=true;break;
                    }
                    bl=true;
                    w++;
                }
            }
            if(t>=6 && bl==false)
            {
                if(p[t-1]=='s' && p[t-2]=='e' && p[t-3]=='t' && p[t-4]=='i' && p[t-5]=='n' && p[t-6]=='i')
                {
                    fv++;
                    if((ma+mn+mv>0) || fn>1)
                    {
                        bl1=true;break;
                    }
                    bl=true;
                    w++;
                }
            }
            if(t>=6 && bl==false)
            {
                if(p[t-1]=='s' && p[t-2]=='i' && p[t-3]=='t' && p[t-4]=='i' && p[t-5]=='n' && p[t-6]=='i')
                {
                    mv++;
                    if((fa+fn+fv>0) || mn>1)
                    {
                        bl1=true;break;
                    }
                    bl=true;
                    w++;
                }
            }
            if(t>=3 && bl==false)
            {
                if(p[t-1]=='r' && p[t-2]=='t' && p[t-3]=='e')
                {
                    mn++;
                    if(mv>0 || (fa+fn+fv>0) || mn>1)
                    {
                        bl1=true;break;
                    }
                    bl=true;
                    w++;
                }
            }
            if(bl==false)
               {
                  bl1=true;break;
               }
            t=-1;
        }
        else p[++t]=s[i];
    }
    if((to==1 && to==w) || bl1==false) pf("YES");
    else pf("NO");
    return 0;
}




