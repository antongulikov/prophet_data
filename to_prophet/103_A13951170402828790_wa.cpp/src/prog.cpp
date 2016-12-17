#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

#define REP(AA,BB) for(int AA=0; AA<(BB); ++AA)
#define FOR(AA,BB,CC) for(int AA=(BB); AA<(CC); ++AA)
#define FC(AA,BB) for(__typeof((AA).begin()) BB=(AA).begin(); BB!=(AA).end(); ++BB)
#define SZ(AA) ((int)((AA).size()))
#define ALL(AA) (AA).begin(), (AA).end()
#define PB push_back
#define MP make_pair

using namespace std;

typedef vector<int> VI;
typedef pair<int, int> PII;
typedef long long LL;
typedef long double LD;

int p[110];

int main(void) {
    int n; scanf("%d", &n);
    REP (i, n)
        scanf("%d", &p[i]);
    LL res = 0LL, ile = 0LL;
    for (int i = n - 1; i >= 0; --i) {
        res += p[i] + ile;
        ile += p[i] - 1;
    }
    printf("%lld\n", res);
    return 0;
}
