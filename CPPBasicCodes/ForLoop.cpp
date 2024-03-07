#include<iostream>

using namespace std;

int counter=50;		// global variable

int main()
{
	
	int counter;	// local variable 
	
	for(counter=1;counter<10;counter++) // local variable value =1
 	{
		cout<<endl<<::counter/counter;	//::counter / counter= 
										// 50/1=50
	}									// 50/2=25
										// 50/3=16
										// 50/4=12
										// COUNTINUE COUNTER=9
	 
 
 
	return (0);
	
}