//Assignment Operator

#include<iostream>
#include<climits>


using namespace std;

int main()
{
	int x=10;
	
	cout<<x<<'\n';
	x += 2;// same as x=x+2
	cout<<x<<'\n';
	x -= 2;// same as x=x-2
	cout<<x<<'\n';
	x *= 2;// same as x=x*2
	cout<<x<<'\n';
	x /= 2;// same as x= x/2
	cout<<x<<'\n';
	x %= 2;// same as  x=x%2
	cout<<x<<'\n';
	x &= 2;// same as  x=x&2
	cout<<x<<'\n';
	x |= 2;// same as  x=x|2
	cout<<x<<'\n';
	x ^= 2;// same as  x=x^2
	cout<<x<<'\n';
	x >>= 2;// same as  x=x>>2
	cout<<x<<'\n';
	x <<= 2;// same as  x=x<<2
	cout<<x<<'\n';
	
	return 0;	
}
