#include <stdio.h>

void BUY1GET1()
{
	char s[200];
	scanf("%s", s);
	int count[52];
	int ans = 0;
	for( int i=0; i<52; i++ )
	{
		count[i] = 0;
	}
	for( int i=0; s[i] != 0; i++ )
	{
		if( s[i] < 92 )
		{
			count[s[i] - 'A'] ++;
		}
		else count[s[i] - 'a' + 26] ++;
	}
	for( int i=0; i<52; i++ )
	{
		ans += count[i]/2 + count[i] - (count[i]/2)*2;
	}
	printf("%d\n", ans);
}

int main(){
	int t;
	scanf("%d", &t);
	for( int i=0; i<t; i++ )
	{
		BUY1GET1();
	}
	return 0;
}
