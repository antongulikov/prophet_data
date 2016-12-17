#include <stdio.h>
#include <ctype.h>
#include <assert.h>
#include <string.h>



const char road[1000]="C:\\data\\";
char roadnum[1000]="";
char roadin[1000]="";
char roadout[1000]="";


void writeIntoFile(char num[]){
	strcpy(roadnum,num);
	strcpy(roadin,road);
	strcat(roadin,roadnum);
	strcat(roadin,".");
	strcpy(roadout,roadin);
	strcat(roadin,"in");
	strcat(roadout,"out");
	//puts(roadin);
	//puts(roadout);
	freopen(roadin,"r",stdin);
	freopen(roadout,"w",stdout);
}
void solve();
void solveM(){
    char ch[50];

    for(int i=1;i<=30;i++){
        sprintf(ch,"%d",i);
        writeIntoFile(ch);
        solve();
    }
}

typedef long long lld;
const lld N=1e5;
const lld M=1e8;
const int MOD=1000003;

lld cal1(lld s,lld f,lld t,lld m){
    t-=m-s;
    s=m;
    t-=m-1;
    if(t<0)t=0;
    lld x=2*(m-1);
    lld q=x;
    x=t/q;
    if(t%q)x++;
    return m-1+x*q+m-f;
}


lld cal2(lld s,lld f,lld t,lld m){
    t-=s-1;
    s=1;
    if(t<0)t=0;
    lld x=2*(m-1);
    lld q=x;
    x=t/q;
    if(t%q)x++;
    return x*q+f-1;
}



void solve()
{
    int m,n;
    int i,j,k;
    lld s,f,t;
    while(scanf("%d%d",&n,&m)!=EOF){
        while(n--){
            scanf("%lld%lld%lld",&s,&f,&t);
            if(s==f)puts("0");
            else if(s<f){
                printf("%lld\n",cal2(s,f,t,m));
            }
            else{
                printf("%lld\n",cal1(s,f,t,m));
            }
        }
    }
}

int main(){
     //solveM();
    solve();
	return 0;
}

