#include <iostream>

using namespace std;

int main()
{

    int n , a , b , x = 0 , z = 0  , y=0;

    cin>>n;
    for (int i = 0 ; i < n ; i++){
        cin >> a >> b ;
        y += b ;
    x = y - a;
    z = max (z , x);
    }
    cout<<z<<endl;

return 0 ;
}