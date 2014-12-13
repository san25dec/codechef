#include <stdio.h>

int sumtrian( int a[][100], int b[][100], int nl, int i, int j )
{
	int ans = a[i][j];
	if( i < (nl - 1) )
	{
		int x, y;
		if( b[i+1][j] == -1 )
		{
			x = sumtrian( a, b, nl, i+1, j );
			b[i+1][j] = x;
		}
		else x = b[i+1][j];

		if( b[i+1][j+1] == -1 )
		{
			y = sumtrian( a, b, nl, i+1, j+1 );
			b[i+1][j+1] = y;
		}
		else y = b[i+1][j+1];
		
		if ( x > y )
		{
			ans += x;
		}
		else
		{
			ans += y;
		}
	}
	return ans;
}

int main()
{
	int t;
	int nl;
	scanf("%d", &t);
	int a[100][100];
	int b[100][100];
	for( int i=0; i<t; i++)
	{
		scanf("%d", &nl);
		for( int k=0; k<nl; k++){
			for( int j=0; j<k+1; j++)
			{
				scanf("%d", &a[k][j]);
			}
		}
	/*	printf("\n\n <<%d>> \n", i);
		for( int k=0; k<nl; k++ )
		{
			for( int j=0; j<k+1; j++)
			{
				printf("%d ",a[k][j]);
			}
			printf("\n");
		}
	*/	for( int i=0; i<100; i++)
		{
			for( int j=0; j<=i; j++)
			{
				b[i][j] = -1;
			}
		}
		printf("%d\n", sumtrian(a, b, nl, 0, 0));
	}
	return 0;
}
				
	
