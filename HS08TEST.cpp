#include <stdio.h>

int main()
{
	int a;
	float b;
	scanf("%d %f", &a, &b ); 
	if( a%5 == 0 )
	{
		if( a*1.0 > b - 0.5  )
		{
			printf("%.2f\n", b);
			return 0;
		}
		else
		{ 
			printf("%.2f\n", b - a*1.0 - 0.5);
			return 0;
		}
	}
	else printf("%.2f\n", b);
	return 0;
}
