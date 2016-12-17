#include<iostream>
using namespace std;
int main() {
    int n,a,b;
    cin >> n >> a >> b;
    int res=0;
    for(int i=0;i<=b;i++) if (n-i>=a) res++;
    cout << res;
}