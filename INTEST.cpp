#include <stdio.h>

inline int getdiv( int a, int b )
{
	if( a - (a/b)*b == 0)
		return 1;
	else return 0;
}
int main()
{
	int n, k, count = 0, val;
	scanf("%d %d", &n, &k);
	for( int i=0; i<n; i++ )
	{
		scanf("%d", &val);
		if( getdiv(val, k) == 1)
			count ++;
	}
	printf("%d\n", count);
	return 0;
}
