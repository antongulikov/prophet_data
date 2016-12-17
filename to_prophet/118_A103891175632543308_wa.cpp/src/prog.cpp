#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;

int main(void){
	char linha[101];
	char nova[3001];
	int pos_atual = 0;
	scanf("%s",linha);
	int s = strlen(linha);
	for(int i=0;i<s;i++){
		if(linha[i]=='y' && linha[i]!='a' && linha[i]!='e' && linha[i]!='i' && linha[i]!='o' && linha[i]!='u' &&
			linha[i]=='Y' && linha[i]!='A' && linha[i]!='E' && linha[i]!='I' && linha[i]!='O' && linha[i]!='U'){
			nova[pos_atual++] = '.';
			if(linha[i]<'a') nova[pos_atual++] = linha[i]-'A'+'a';
			else nova[pos_atual++] = linha[i];
		}
	}	
	nova[pos_atual] = '\0';
	printf("%s\n",nova);
	return 0;
}
