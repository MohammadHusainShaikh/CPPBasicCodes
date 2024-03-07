#include<iostream>

using namespace std;

const int MAX=10;

int main()
{

int i, var[]={10,20,30,40,50,60,70,80,90,100};
			//0 ,1 ,2, 3, 4, 5, 6, 7, 8,  9,
int *ptr;

ptr=var;

for (i=0;i<MAX;i++)				
{
	cout<<"\n\n address of var :"<< i<<ptr;		//address of var[0]=gbhegfhsdvfhg
	cout<<"\n value of var  :" <<*ptr;		//value of var [0]=10
	
	ptr++;
}

	
}