#include <stdio.h>

int main()
{
	int a[100000]; 
	int t;
	long long int n;
	long long int ans = 0;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		ans = 0;
		scanf("%lld", &n);
		for(long int j=0; j<n; j++)
		{
			scanf("%d", &a[i]);
		}
		ans = n*(n-1)/2;
		printf("%lld\n", ans);

	}
	return 0;
}
