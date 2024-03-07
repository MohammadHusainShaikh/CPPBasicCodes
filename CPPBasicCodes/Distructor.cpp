#include<iostream>

using namespace std;

int count=0;

class test{
	
	public :
		
		test()
		{
			count++;
			cout<<"objects are :"<<count<<endl;
		}
		
		~test()
		{
		 	cout<<"objects are :"<<count<<endl;
		 	count--;
		}
};

int main()
{
	test A1,A2,A3,A4;
	cout<<"enter block"<<endl;
	
/*	test A5;
	cout<<"enter block"<<endl;
	
	test A6;*/
	
	return 0;
	
	
}