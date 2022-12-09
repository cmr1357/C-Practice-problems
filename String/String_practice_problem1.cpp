//String

#include<iostream>
#include<climits>


using namespace std;

int main()
{
	//declare and print a string
	string a="Hello";
	cout<< a<<'\n';
	
	// string concatenation
	string b=" Abhinav ";
	string c = a+b;
	cout<<c<<'\n';
	
	// Append( String in c++ is an object, which contain functions that can 
	//perform certain operations on string. Append function concatenate two functions.
	string greeting= a.append(b);
	cout<<greeting<<'\n';
	
	// string length
	cout<<" The lenth of string b s : "	<<b.length()<<'\n';
	
	// using size() function	
	cout<<" The lenth of string b s : "	<<b.size()<<'\n';
	
	//Access strings
	string mystring = "Hello";
	cout <<mystring[0]<<'\n';//You can access the charaters in a string by referring to its index number inside brackets [] and it start with 0,1..
	
	// Change String Characters
	mystring[0] = 'k';
	cout<<mystring<<'\n';
	
	return 0;
}
