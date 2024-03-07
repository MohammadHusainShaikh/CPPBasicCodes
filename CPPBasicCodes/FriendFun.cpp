#include<iostream>
#include<conio.h>
using namespace std ;
class B;

class A
{
	private:
		int a;
	public:
		A()
		{
			a=0;
		}
		A(int x)
		{
			a=x;
		}
		void showA()
		{
			cout<<"\nA:"<<a;
		}

	friend void max(A objA, B objB);
};
class B
{
	private:
		int b;
	public:
		B()
		{
			b=0;
		}
		B(int x)
		{
			b=x;
		}
		void showB()
		{
			cout<<"\nB:"<<b;
		}
	friend void max(A objA, B objB);
};
void max(A objA,B objB)
{
	if(objA.a>objB.b)
	{
		cout<<"\nA is BIG";
	}
	else
	{
		cout<<"\nB is BIG";
	}
}
int main()
{
	
	A objA(10);
	B objB(20);
	objA.showA();
	objB.showB();
	max(objA,objB);
	getch();
}