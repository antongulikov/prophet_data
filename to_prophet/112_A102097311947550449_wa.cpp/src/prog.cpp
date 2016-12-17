#include<stdio.h>
#include<string.h>
int a,i;
char d[10006],m[100006];
int main(){
	scanf("%s %s",d,m);

	a=strlen(d);

	for(i=0 ; i<a ; i++){
		if(d[i] > m[i] && d[i] != m[i]+32){
			puts("1");
			return 0;
		}
		if(d[i] < m[i] && d[i]+32 != m[i]){
			puts("-1");
			return 0;
		}
	}
	puts("0");
	return 0;
}


