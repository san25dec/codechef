#include <stdio.h>

int main(){
	int t;
	int n;
	scanf("%d", &t);
	for( int i=0; i<t; i++ )
	{
		scanf("%d", &n);
		if( n%2 )
			printf("%d\n", n-1);
		else printf("%d\n", n);
	}
	return 0;
}
