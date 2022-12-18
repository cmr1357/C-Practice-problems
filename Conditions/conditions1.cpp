// Conditions

#include<iostream>
#include<climits>

using namespace std;

int main()
{
	//if
	
	int x=10;
	int y=30;
	
	if(x<y)
	{
		cout<<"x<y"<<'\n';
	}
	
	// else
	else
	{
		cout<<"x >y"<<'\n';
		
	}
	// if else if..
	
	if(x>50)
	{
		cout<<"Hi Monster"<<'\n';
	}else if(x>25)
	{
		cout<<"Hi Devil"<<'\n';
	}
	else
	{
		cout<<"Hi little Monkey;"<<'\n';
	}
	// Shorthand if
int time=20;
string day;	
day=(time<18) ?"Good Day":" Good Evening";
	return 0;
}

