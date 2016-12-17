#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <string.h>
using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll;
long long gcd(long long a, long long b) {
    if(b==0) return a;
    return gcd(b,a%b);
}
long long fastpower(int a, int b) {
    if(b==1) return a;
    if(b==0) return 0;
    if(b%2) {
        return a*fastpower(a*a,(b-1)/2);
    }
    else {
        return fastpower(a*a,b/2);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int k,l;
    cin >> k >> l;
    for(int i=1; i<=log2(l); i++) {
        if(fastpower(k,i)==l) {
            cout << "YES" << endl << i-1 << endl;
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
