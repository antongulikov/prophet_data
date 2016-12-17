#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <algorithm>
#include <vector>

#define FORMAT %I64

using namespace std;

long long int k,l;

int main(){
  scanf("%I64%I64",&k,&l);
  
  for(long long int i = k,j=1 ; i <= l ; i *= k,j++){
    if(i == l){
      printf("YES\n%lld\n",j-1);
      return 0;
    }
  }
  printf("NO\n");
  return 0;
}