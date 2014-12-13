#include <stdio.h>

int ERROR_FUN( char s[] )
{
	int len = 0;
	while(s[len] != 0)
		len++;
	for( int i=0; i<len-2; i++)
	{
		if(s[i]=='0')
			if( s[i+1]=='1' && s[i+2]=='0')
				return 1;
		else if(s[i+1]=='0' && s[i+2]=='1')
			return 1;
	}
	return 0;
}

int main(){
	char str[100001];
	int t;
	scanf("%d", &t);
	for( int i=0; i<t; i++ )
	{
		scanf("%s", str);
		if( ERROR_FUN(str) == 1)
			printf("Good\n");
		else printf("Bad\n");
	}
	return 0;
}
