#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int N,M;
	scanf("%d %d",&N,&M);M--;
	for(int i=0;i<N;i++)
	{
		int s,f,t;
		scanf("%d %d %d",&s,&f,&t);
		int ret=t;
		
		t%=(M*2);
		
		int F=0;
		
		if(t<M)
		{
			t++;
			
			if(t>s)
			{
				ret+=M+1-t;
				ret+=M+1-s;
				t=M+(M+1)-s;
				F=1;
			}
			else
			{
				ret+=s-t;
				t=s-1;
				F=1;
			}
		}
		else
		{
			t-=M;
			t=M-t+1;
			
			if(t>=s)
			{
				ret+=t-s;
				t=M+(M+1)-s;
				F=1;
			}
			else
			{
				ret+=t-1;
				ret+=s-1;
				t=s-1;
				F=1;
			}
		}
		
		//printf("%d ",ret);
		
		t%=(M*2);
		
		if(F)
		{
			if(t<M)
			{
				t++;
				
				if(t>f)
				{
					ret+=M+1-t;
					ret+=M+1-f;
					//t+=M-t;
					//t+=M-f;
				}
				else
				{
					ret+=f-t;
					//t+=f-t;
				}
			}
			else
			{
				t-=M;
				t=M-t+1;
				
				if(t>=f)
				{
					ret+=t-f;
					//t+=t-f;
				}
				else
				{
					ret+=t-1;
					ret+=f-1;
					//t+=t-1;
					//t+=f-1;
				}
			}
		}
		if(f==s)printf("0\n");
		else printf("%d\n",ret);
	}
}
