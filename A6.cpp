#include <stdio.h>

void int_to_bin( int a, char s[] )
{
	int ch = 0;
	while( a>0 )
	{
		if( a%2 )
			s[ch ++] = '1';
		else s[ch ++] = '0';
		a /= 2;
	}
	s[ch] = 0;
	printf("%s\n", s);
}

int parity( int a )
{
	int count = 0;
	while( a>0 )
	{
		count ++;
	 	a = a & (a -1);
	}
	return count;
}
int main()
{
	int a;
	char s[1000];
	scanf("%d", &a);
	int_to_bin( a, s);
	printf("%d\n", parity(a));
	return 0;
}
