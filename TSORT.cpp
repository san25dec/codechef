#include <stdio.h>

void insertionsort(int a[], int m )
{
	int val;
	for( int i=1; i<m; i++ )
	{
		val = a[i];
		int j;
		for( j=i-1; j>=0 && a[j]>val; j-- )
		{
			a[j+1] = a[j];
		}
		a[j+1] = val;
	}
}
void quickSort(int arr[], int left, int right)
{
	int i = left, j = right;
 	int tmp;
  	int pivot = arr[(left + right) / 2];

  	/* partition */
  	while (i <= j) {
   	     while (arr[i] < pivot)
   	           i++;
   	     while (arr[j] > pivot)
   	           j--;
   	     if (i <= j) {
   	           tmp = arr[i];
   	           arr[i] = arr[j];
   	           arr[j] = tmp;
   	           i++;
   	           j--;
   	     }
	}	
	/* recursion */
	if (left < j)
 		quickSort(arr, left, j);
	if (i < right)
	        quickSort(arr, i, right);
}
int main()
{
	int a[1000000]; 
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		scanf("%d", &a[i]);
	}
	quickSort( a, 0, t-1 );		
	for(int i=0; i<t; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
