#include <stdio.h>
#include <vector>

using namespace std;

int FCTRL( int a )
{
	int count = 0;
	int factor = 5;
	while ( a/factor )
	{
		count += a/factor;
		factor *= 5;
	}
	return count;
}

int main()
{
	int n, val;
	vector<int> ans;
	scanf("%d",&n);
	for( int i=0; i<n; i++)
	{
		scanf("%d", &val);
		ans.push_back( FCTRL(val) );
	}
	for( int i=0; i<n; i++)
	{
		printf("%d\n", ans[i]);
	}
	return 0;
}
