#include <iostream>
#include <iomanip>

#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <numeric>
#include <algorithm>

#include <functional>
#include <cctype>

#include <complex>
#include <string>
#include <sstream>

#define pb push_back
#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()

#define rep(i,n) for(int i=0;i<(n);i++)
#define tr(container, it) \
    for(typeof(container.begin()) it = container.begin(); it != container.end(); ++it)
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define sz(a) ((int)a.size())

typedef long long ll;
const int dx[] = {1,0,-1,0};
const int dy[] = {0,-1,0,1};
const double EPS = 1e-9;

using namespace std;

int main(){
    char t;
    cin >> t;
    string f,s;
    cin >> f >> s;
    int f_rank,s_rank;
    char f_suit,s_suit;
    if('6' <= f[0] && f[0] <= '9') f_rank = f[0] - '0';
    if(f[0] == 'T') f_rank = 10;
    if(f[0] == 'J') f_rank = 11;
    if(f[0] == 'Q') f_rank = 12;
    if(f[0] == 'K') f_rank = 13;
    if(f[0] == 'A') f_rank = 14;

    if('6' <= s[0] && s[0] <= '9') s_rank = s[0] - '0';
    if(s[0] == 'T') s_rank = 10;
    if(s[0] == 'J') s_rank = 11;
    if(s[0] == 'Q') s_rank = 12;
    if(s[0] == 'K') s_rank = 13;
    if(s[0] == 'A') s_rank = 14;

    f_suit = f[1];s_suit = s[1];
    if((f_suit == s_suit and f_rank > s_rank)){
        cout << "YES" << endl;
        return 0;
    }else if(f_suit == t){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
