#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
#define INF 0x3fffffff
#define LL long long
#define N 1005
int is_pri[N];
int n,fa[N],vis[N];
char str[N];
int getfather(int v)
{
    if(fa[v]!=v)
        fa[v]=getfather(fa[v]);
    return fa[v];
}
void init()
{
    int i,j,a,b;
    memset(is_pri,0,sizeof(is_pri));
    is_pri[1]=1;
    for(i=1;i<=n;i++)
    {
        if(!is_pri[i])
        {
            for(j=2*i;j<=n;j+=i)
            {
                a=getfather(i);
                b=getfather(j);
                if(a!=b)    fa[b]=a;
                is_pri[j]=1;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        getfather(i);
    }
}
struct node
{
    int fa;
    int cn;
    bool operator <(const node &cur)const
    {
        return cn>cur.cn;
    }
};
struct node fas[N],alp[30];
int cnt;
int main()
{
    int i,j,k;
    while(scanf("%s",str+1)!=EOF)
    {
        n=strlen(str+1);
        for(i=0;i<26;i++)
        {
            alp[i].cn=0;
            alp[i].fa=i;
        }
        for(i=1;i<=n;i++)
        {
            alp[str[i]-'a'].cn++;
            fa[i]=i;
        }
        sort(alp,alp+26);
        init();
        memset(vis,0,sizeof(vis));
        cnt=0;
        for(i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                cnt++;
                fas[cnt].fa=fa[i];
                fas[cnt].cn=0;
                for(j=i;j<=n;j++)
                {
                    if(fas[cnt].fa==fa[j])
                    {
                        vis[j]=1;
                        fas[cnt].cn++;
                    }
                }
            }
        }
        for(i=1;i<=cnt;i++)
        {
            for(j=0;j<26;j++)
            {
                if(alp[j].cn>=fas[i].cn)
                {
                    for(k=1;k<=n;k++)
                    {
                        if(fa[k]==fas[i].fa)
                        {
                            str[k]='a'+alp[j].fa;
                            alp[j].cn--;
                        }
                    }
                    break;
                }
            }
            if(j==26)   break;
        }
        if(i<=cnt)  printf("NO\n");
        else        printf("YES\n%s\n",str+1);
    }
    return 0;
}
