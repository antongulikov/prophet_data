#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int dx[9]={0,0,1,1,1,0,-1,-1,-1};
int dy[9]={0,1,1,0,-1,-1,-1,0,1};

int d[8][8],x[1000],y[1000];
int last,curr,sy,add,ax,ay,ss; 
string s;
bool lose;

void next()
 {
   int e[8][8];
   for (int i=0; i<8; i++)
    for (int j=0; j<8; j++)
     e[i][j]=0;
   
   for (int i=1; i<8; i++)
    for (int j=0; j<8; j++)
     if (d[i][j]==1) e[i-1][j]=1; 
   
   for (int i=0; i<8; i++)
    for (int j=0; j<8; j++)
     d[i][j]=e[i][j];
   
   sy--;
 }
   

int main()
 {
   //ifstream f("input.txt");
   
   sy=-1; 
   for (int i=7; i>-1; i--)
    {
      cin>>s;
      for (int j=0; j<8; j++)
       if (s[j]=='M') { x[0]=i; y[0]=j; } else
       if (s[j]=='S') 
        { d[i][j]=1;
          if (i>sy) sy=i;
          if (i!=0) d[i-1][j]=1;
          ss=1;
        }
    }
   
   if (ss==0) goto G;
   
   while (1)
    {
      for (int i=last; i<=curr; i++)
       for (int j=0; j<9; j++)
         {
            ax=x[i]+dx[j];
            ay=y[i]+dy[j];
            
            if (ax>=0 && ax<=7 && ay>=0 && ay<=7 && d[ax][ay]==0)
             {
                if (ay>=sy) goto G;
                add++;
                x[add]=ax;
                y[add]=ay;
             }
         }
      if (add==curr) { lose=1; goto G; }
      last=curr+1;
      curr=add;
      next();
    }
  G: if (lose==0) cout<<"WIN"; else cout<<"LOSE";
  cin>>s;
 } 
             
                 
         
         
         
         
      
        
