#include<iostream>
#include<climits>

using namespace std;

int main()
{
	string fruits[4]={"Apple","Banana","Orange","Lemon"};
	cout<<fruits[0];
	
	//Change an array element
	fruits[0]="Cherry";
	cout<<fruits[0];
	
	//Loop Through an array
	string cars[4]={"BMW","Toyota","Ford","Mazda"};
	for(int i=0;i<5;i++)
	{
		cout<<cars[i]<<"\n";
	}
	
	int numbers[5]={1,2,3,4,5};
	//Get the Size of an Array
	
	cout <<sizeof(numbers)<<"\n";//The result show 16 insted of 4 (sizeof data type used * number of elements)
	cout <<sizeof(numbers)/sizeof(int);
	return 0;
}
	
