#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cin>>x;
    bool luck = false;
    if(x % 7 ==0 || x%4 ==0 ){luck = true;}
    int cnt=0;
    int n=0;
    while(x>0){
        int lsnum = x%10;
        if(lsnum == 4 ||lsnum == 7 ){cnt++;}
        x/=10;n++;
        }

    if(cnt == n){luck = true;}
    if(luck == true){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}


}