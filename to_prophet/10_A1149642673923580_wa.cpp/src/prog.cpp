#include<iostream>
using namespace std;
struct node
{
    int l,r;
};
int main()
{
    int p[3],t[2];
    int n;
    node time[105];
    while(cin>>n>>p[0]>>p[1]>>p[2]>>t[0]>>t[1])
	{
	    for(int i=0;i<n;i++)
		{
		    cin>>time[i].l>>time[i].r;
		}
	    int ans=(time[0].r-time[0].l)*p[0];
	    for(int i=1;i<n;i++)
		{
		    int dis=time[i].l-time[i-1].r;
		    int m;
		    if(dis<=t[0]) m=dis*p[0];
		    else if(dis>t[0]&&dis<=t[0]+t[1]) m=t[0]*p[0]+(dis-t[0])*p[2];
		    else m=t[0]*p[0]+t[1]*p[1]+(dis-t[0]-t[1])*p[2];
		    
		    int u=(time[i].r-time[i].l)*p[0]+m;
		    ans+=u;
		    //cout<<m<<' '<<dis<<' '<<u<<endl;
		}
	    cout<<ans<<endl;
	}
    return 0;
}
