// Logical Operators

#include<iostream>
#include<climits>

using namespace std;

int main()
{
	int x=1;
	int y=2;
	
	cout<<(x&&y)<<'\n';
	cout<<(x||y)<<'\n';
	x=!x ;
	cout<<x<<'\n';
	return 0;
}
