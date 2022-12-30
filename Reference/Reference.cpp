#include<iostream>
#include<climits>

using name space std;

int main()
{
	
	//Creating References
	
	string food="pizza";
	string &meal=food;//Reference to food
	cout<<food<<"\n";
	cout<<meal;
	return 0;
}
