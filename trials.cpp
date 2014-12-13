#include <stdio.h>
#include <omp.h>
using namespace std;

void fn1()
{
	printf("Hello\n");
}
void fn2()
{
	printf("Me am\n");
}
void fn3()
{
	printf("Santhosh\n");
}
int main()
{
	#pragma omp parallel for
	for(int i =0; i<10; i++)
	{
		#pragma omp sections
		{
			{printf("%d\n",i);}
			#pragma omp section
			{
				fn2();
				fn3();
			}
			#pragma omp section
			{
				printf("Wow\n");
			}
		}
	}
		
	return 0;
}
