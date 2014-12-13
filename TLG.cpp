#include <iostream>
#include <stdio.h>

using namespace std;

int givelead(int a, int b, int &lead)
{
	if( a>b)
	{
		lead = a-b;
		return 1;
	}
    else
    {
    	lead = b-a;
    	return 2;
    }
}
int main()
{
	int N;
	int lead=0, person=1;
	int buf1, buf2, buf3, buf4;
	int lead1=0, lead2= 0;
	scanf("%d", &N);
    for(int i=0; i<N; i++)
	{
		scanf("%d %d", &buf1, &buf2);
		buf1 = buf1 + lead1;
		buf2 = buf2 + lead2;

		buf3 = givelead(buf1, buf2, buf4);
		if( buf4 >= lead)
		{
			lead = buf4;
			person = buf3;
		}
		lead1 = buf1;
		lead2 = buf2;
    }
	
    printf("%d %d\n", person, lead);
    return 0;
}
