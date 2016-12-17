

#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int factor,coor[40][2],a,i,j;
    double time=0.0;
    scanf("%d %d",&a,&factor);
    for(i=0;i<a;i++){
    scanf("%d %d",&coor[i][0],&coor[i][1]);
    }
    for(i=1;i<a;i++){
    time+=(double)sqrt((coor[i][0]-coor[i-1][0])*(coor[i][0]-coor[i-1][0])+(coor[i][1]-coor[i-1][1])*(coor[i][1]-coor[i-1][1]));
    }
    time*=(double)factor;
    time/=50.0;
    printf("%.6lf\n",time);
    return 0;
}

