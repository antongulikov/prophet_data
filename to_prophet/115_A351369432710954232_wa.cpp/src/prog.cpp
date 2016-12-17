#include<iostream>
#include<vector>
#include<stack>
#include<cstring>
#include<map>
#include<set>
#include<string>
#include<queue>
#include<algorithm>
#include<stdio.h>
#include<sstream>
#include<cctype>
#include<fstream>
#include<set>
using namespace std;
vector<vector<int> >adj;
vector<bool>visit;
queue<int>q;
int len=0;
void bfs (int a){
    q.push(a);
    visit[a]=1;
    int q2;
    while(!q.empty())
    {
        int s=q.size();
        while(s--)
        {
            q2=q.front();
            q.pop();
            for(int i=0;i<adj[q2].size();++i)
            {
                if(!visit[adj[q2][i]])
                {
                    visit[adj[q2][i]]=1;
                    q.push(adj[q2][i]);
                }
            }
        }
        len++;


    }
    
}
int main()
{
    //freopen("code.txt","r",stdin);
    int n,m;
    cin>>n;
    adj.resize(n+1);
    visit.resize(n+1);
    for(int i=1;i<=n;++i)
    {
        cin>>m;
        if(m!=-1)
        adj[m].push_back(i);
    }
    int max=0;
    for(int i=1;i<=n;++i)
    {
        if(!visit[i])
        {
            len=0;
            bfs(i);
            if(len>max)
            max=len;
        }
    }
    cout<<max<<endl;
    return 0;
}