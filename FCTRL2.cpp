#include <stdio.h>

void getnum( int a, int array[], int& m)
{
	 m = 0;
	 for( int i=0; a>0; i++)
	 {
		 array[i] = a%10;
	         a /= 10;
	         m ++;
	 }
}

void multiply( int a, int array[], int& m)
{
	int temp = 0, x, i;
	for( i=0; i<m; i++)
	{
		x = array[i]*a + temp;
		array[i] = x % 10;
		temp = x / 10;
	}
	while( temp > 0 )
	{
		array[i] = temp % 10;
		temp /= 10;
		i++;
	}
	m = i;
}
void factorial( int a )
{
	int array[200], m = 0;
	array[0] = 1;
	m = 1;
	for(int i=0; i<a; i++)
	{
		multiply(i+1, array, m);
	}
	for( int i=m-1; i>=0; i-- )
	{
		printf("%d", array[i]);
	}
	printf("\n");
}

int main()
{
	int t;
	scanf("%d", &t);
	int value;
	for( int i=0; i<t; i++)
	{
		scanf("%d", &value);
		factorial( value );
	}
	return 0;
}
