//By Lin
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<queue>

#define sqr(x) ((x)*(x))
#define Rep(i,n) for(int i = 0; i<n; i++)
#define foreach(i,n) for( __typeof(n.begin()) i = n.begin(); i!=n.end(); i++)
#define X first
#define Y second
#define mp(x,y) make_pair(x,y)

using namespace std;
typedef long long LL;
typedef pair<int,int> pii;

char    ss[6][10] = {"lios","liala","etr","etra","initis","inites"};
char    str[100050];
int     test(char str[]){
    int len = strlen(str);
    Rep(i,6){
        int k = strlen(ss[i]);
        if ( len >= k && strcmp(ss[i],str+len-k ) == 0 ) return i;
    }
    return -1;
}
bool    pan(){
    int last = 0 , kind = -1, num = 0;
    while ( ~scanf("%s", str ) ) {
        int k = test(str);
        if ( k == -1 ) return false;
        if ( kind == -1 ) kind = k&1;
        if ( (k&1) != kind ) return false;
        k >>= 1;
        if ( k == 1 ) num++;
        if ( k < last ) return false;
        last = k;
    }
    return num==1;
}
int     main(){
    printf(pan()?"YES\n":"NO\n");
    return 0;
}
