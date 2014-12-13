#include <iostream>

using namespace std;

int main()
{
	int check = 1;
	while( check )
	{
		int nos;
		cin >> nos;
		if( nos!=42 )
			cout <<endl<< nos;
		else check = 0;
	}
	return 0;
}		
