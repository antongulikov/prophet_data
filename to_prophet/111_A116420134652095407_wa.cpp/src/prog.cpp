#include <cstdio>
#include <cstring>

int n;
long long x, y;

int main() {
	scanf("%d%lld%lld", &n, &x, &y);
	if (n <= y && (n - 1) + (y - n + 1) * (y - n + 1) >= x) {
		for (int i = 1; i < n; ++i) {
			printf("1\n");
		}
		printf("%lld\n", y - n + 1);
	} else {
		printf("-1\n");
	}
	return 0;
}
