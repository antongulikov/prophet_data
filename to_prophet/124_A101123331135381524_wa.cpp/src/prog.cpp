#include <stdio.h>

int main(void){
    int n, a, b, c=0;
    scanf("%d %d %d", &n, &a, &b);
    for(int i=a+1; i<=n; ++i)
        ++c;
    printf("%d", c);
}