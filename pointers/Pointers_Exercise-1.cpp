#include<iostream>
#include<climits>

using namespace std;

int main()
{
	
	// A Pointer is a variable that stores the memory address as its value.
	
	string food="Pizza";
	//Create Pointers
	string *ptr=&food;
	
	cout<<food<<"\n";
	cout<<&food<<"\n";
	cout<<ptr<<"\n";
	
	//Dereferencing - output the value of food with the pointer
    cout<<*ptr<<"\n";
    
    //Modify the pointer value
    
    *ptr="Burger";
    cout<<*ptr<<"\n";
    cout<<food<<"\n";
    
	return 0;
}
