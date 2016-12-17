#include<iostream>
#include<cstdio>
using namespace std;

#define si(n) scanf("%d",&n)

int main()
{
    int n,t,e=0,o=0;
    si(n);
    for(int i=0;i<n;i++){
        si(t);
        if(t%2)o++;
        else e++;
    }
    if(o==0)
        cout<<e;
    else if(o%2==0){
        cout<<e;
    }
    else{
        cout<<1;
    }
    return 0;
}
