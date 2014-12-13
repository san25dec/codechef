#include <stdio.h>
#include <string.h>

int getHole( char a )
{
	switch( a )
	{
		case 'A': return 1;
		case 'B': return 2;
		case 'D': return 1;
		case 'O': return 1;
		case 'P': return 1;
		case 'Q': return 1;
		case 'R': return 1;
		default: return 0;
	}
}

int main()
{
	int t, count = 0;
	scanf("%d", &t);
	char c[100];
	int strl;
	for( int i=0; i<t; i++ )
	{
		scanf("%s", c);
		strl = strlen(c);
		for( int j=0; j<strl; j++)
		{
			count += getHole( c[j] );
		}
		printf("%d\n", count);
		count =0;
	}
	return 0;
}

