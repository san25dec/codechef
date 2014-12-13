#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> arr;
	iterator<int> it;
	for( int i=0; i<5; i++)
	{
		arr.push_back(i);
	}
	it = arr.begin();
	for( int i=0; i<5; i++)
	{
		cout<<*(it+i)<<endl;
	}
	return 0;
}
