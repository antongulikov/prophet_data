#include<iostream>
#include<stdio.h>
#include<sstream>
#include<fstream>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#define  FOR(i,x,n) for(int i=x;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define b_e(x) x.begin(),x.end()
#define rb_re(x) x.rbegin(),x.rend()
#define p_b push_back
#define m_p make_pair
#define SZ size()
#define srt insert
#define CL clear()
#define DE delete
#define LL long long
#define S string

using namespace std;

int main()
{
    LL x,y,arr[2222],res=0,te;
    scanf("%I64d %I64d", &x , &y);
    FOR(i,0,x)
    {
        scanf("%l64d", &arr[i]);
        if(i!=0){
            if(arr[i] == arr[i-1]){
                res++;
                arr[i]+=y;
            }
            else if (arr[i] < arr[i-1])
            {
                te = arr[i-1] -arr[i];
                te/=y;
                if(arr[i]+(te*y) > arr[i-1])
                    res+=te;
                else{
                    res+=te+1;
                    arr[i]+=y;
                }
                arr[i]+= (te*y);
            }
        }
    }
    printf("%lld",res);
    return 0;
}
