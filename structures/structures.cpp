#include<iostream>
#include<climits>

using namespace std;

int main()
{
	// Create a structure variable.
	struct {
		int year;
		string make;
		string model;
		
	}mystruct;
	
	//Assign values to mystructure
	mystruct.year=2022;
	mystruct.make="toyota";
	mystruct.model="RAV4";
	
	//Print members of mystructure
	
	cout<<mystruct.year<<"\n";
	cout<<mystruct.make<<"\n";
	cout<<mystruct.model<<"\n";
	
	//Named Structures
	
	struct car{
		int year1;
		string make1;
	};
	
	car mycar1;
	mycar1.year1=2009;
	mycar1.make1="Nissan";
	
	cout<<mycar1.year1<<"\n";
	cout<<mycar1.make1<<"\n";
	
	return 0;
}
