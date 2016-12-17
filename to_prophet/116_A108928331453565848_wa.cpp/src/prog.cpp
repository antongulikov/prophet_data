#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> numbers;



int main()
{
    int a,b,n,min = 0,x;
    cin>>n;
    for(int i = 0;i < n;i++) {
        cin>>a;
        cin>>b;
        x+=(b - a);
        min = min > x ? min : x;
    }
    cout<<min;
    
}