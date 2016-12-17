#include <stdio.h>
#include <string.h>

int main()
{
	char word1[101],word2[101];
	int s1,s2;

	scanf("%s",word1); fflush(stdin);
	scanf("%s",word2); fflush(stdin);
	s1=0;
	s2=0;

	for (int i=0;i<strlen(word1);i++)
	{
		if (((int)word1[i]>=97) && ((int)word1[i]<=122))
		{
			word1[i]=(char)(int)(word1[i]-32);
		}
		if (((int)word2[i]>=97) && ((int)word2[i]<=122))
		{
			word2[i]=(char)(int)(word2[i]-32);
		}

		if (((int)word1[i]>(int)word2[i]))
		{
			s1=1;
			break;
		}
		else
			if(((int)word2[i]>(int)word1[i]))
			{
				s2=1;
				break;
			}
	}

	if (s1>s2) printf("1\n");
	else
	if (s1==s2) printf("0\n");
	else
	if (s1<s2) printf("-1\n");

}