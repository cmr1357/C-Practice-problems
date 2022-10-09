// C program to find the size of fundamental datatypes

#include<iostream>

using namespace std;

int main()
{
	// sizeof() is a compile time operator tat determines the size in bytes. 
	cout<<"size of fundamental data types in c++"<<"\n"<<"-----------------------------------------------"<<"\n";
	cout<<"size of a char --"<<sizeof(char)<<" bytes \n";
	cout<<"size of a integer --"<<sizeof(int)<<" bytes \n";
	cout<<"size of a float --"<<sizeof(float)<<" bytes \n";
	cout<<"size of a double --"<<sizeof(double)<<" bytes \n";
	cout<<"size of a short --"<<sizeof(short)<<" bytes \n";
	cout<<"size of a long --"<<sizeof(long)<<" bytes \n";
	cout<<"size of a long long --"<<sizeof(long long)<<" bytes \n";
	cout<<"size of a long double --"<<sizeof(long double)<<" bytes \n";
	cout<<"size of a bool --"<<sizeof(bool)<<" bytes \n";
	
	return 0;

}
