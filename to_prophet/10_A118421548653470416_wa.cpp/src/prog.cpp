#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string.h>
#define sqr(x) ((x)*(x))
#define y1 y100500
#define pi 3.1415926535898
using namespace std;

int t[1445],n,i,j,f,l,r,k,a;
int p1,p2,p3,t1,t2;

int main(){
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    cin>>l>>r; 
    k=l; t[l]=1; t[r]=-1;
    for(i=1;i<n;++i){
        cin>>l>>r;
        t[l]=1; t[r]=-1;
    }
    f=1;
    for(l=k;l<=r;++l){
        if(t[l]==1){
            f=0;
        }else
        if(t[l]==-1){
            f=1; j=l;
        }else{
            if(f==0); else
            if(f==1){
                if(l-j==t1){
                    f=2; j=l;
                }
            }else
            if(f==2){
                if(l-j==t2){
                    f=3; 
                }     
            }                  
        }  
        
        if(f==1 || !f) a+=p1; else
        if(f==2) a+=p2; else
        if(f==3) a+=p3;               
    }       

    cout<<a<<endl;
    return 0;
}