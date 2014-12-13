#include <stdio.h>

int main()
{
	unsigned long int n;
	unsigned long int array[100000];
	scanf("%ld", &n);
	int isAmbiguous=1;
	while(n!=0)
	{
		isAmbiguous=1;
		for(int i=0; i<n; i++)
		{
			scanf("%ld", &array[i]);
		}
		for(int i=0; i<n && isAmbiguous ; i++)
		{
			if(array[array[i]-1] != i+1)
				isAmbiguous=0;
		}
		if( isAmbiguous )
			printf("ambiguous\n");
		else
			printf("not ambiguous\n");
		scanf("%ld", &n);
	}
	return 0;
}
