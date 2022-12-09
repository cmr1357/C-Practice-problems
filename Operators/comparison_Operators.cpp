//Comparison Operators

#include<iostream>
#include<climits>

using namespace std;

int main()
{
	int x=2;
	int y=4;
	cout<<(x>y)<<'\n';//returns 0 (False) because 2 is less than 4.
	cout<<(x==y)<<'\n';//returns 0 (False) because 2 is not equal to 4.
	cout<<(x!=y)<<'\n';//returns 1 (True) because 2 is not equal to 4.
	cout<<(x<y)<<'\n';//returns 1 (True) because 2 is less than 4.
	cout<<(x>=y)<<'\n';//returns 0 (False) because 2 is less than 4.
	cout<<(x<=y)<<'\n';//returns 1 (True) because 2 is less than 4.
	return 0;
}
