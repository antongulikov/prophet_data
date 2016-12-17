#include <iostream>
#include <sstream>
using namespace std;
bool ItIsLucky(int N){
    string S;
    ostringstream OS;
    OS<<N;
    S=OS.str();
    for(int i=0;i<S.size();++i){
        if(S[i]!='4' && S[i]!='7')
            return false;
    }

return false;

}
int main()
{
    int x;cin>>x;
    for(int i=1;i<=x;++i){
        if(ItIsLucky(i) && x%i==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
