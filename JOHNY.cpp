#include <stdio.h>

int JOHNY(int a[], int n, int k)
{
	int ans = 0;
	for( int i=0; i<n; i++){
		if( a[k-1]  > a[i] )
			ans ++;
	}
	return ans+1;
}
int main()
{
	int t;
	int n;
	int k;
	int dummy;
	int a[100];
	scanf("%d", &t);
	for( int i=0; i<t; i++)
	{
		scanf("%d", &n);
		for( int j=0; j<n; j++ )
		{
			scanf("%d", &a[j]);
		}
		scanf("%d", &k);
		printf("%d\n", JOHNY(a, n, k));
	}
	return 0;
}
