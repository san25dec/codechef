#include <stdio.h>

int main()
{
	long long int n, k;
	int t;
	scanf("%d", &t);
	for( int i=0; i<t; i++ )
	{	
		scanf("%lld %lld", &n, &k);
		if( k!= 0)
			printf("%lld %lld\n", n/k, n%k);
		else printf("%d %lld\n", 0, n);
	}
	return 0;
}
