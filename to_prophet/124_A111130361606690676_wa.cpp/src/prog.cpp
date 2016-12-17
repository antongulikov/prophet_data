#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num , a , b ;

    cin>>num>>a>>b ;

    b++  ;

    cout<<num-min(a,b)<<endl;

    return 0;
}
