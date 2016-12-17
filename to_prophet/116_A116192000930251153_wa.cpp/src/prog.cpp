#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    int b[1000];
    int MpOn=0;
    int compare=0;
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
}
for(int i=0;i<n-1;i++){
compare=max((((b[i]-a[i])-a[i+1])+b[i+1]),compare);
}
MpOn=compare;
cout << MpOn;
}
