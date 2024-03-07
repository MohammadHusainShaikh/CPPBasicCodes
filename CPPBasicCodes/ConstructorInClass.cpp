#include<iostream>

using namespace std;

class ABC{
	
	private :
		int AccNo;
		float balance;
			
		
	public :
		
		
		void newACC(int a,float b)
		{
			AccNo=a;
			balance=b;
		}
		
		void withdraw(float x){
			
			balance=balance-x;
		}
		
		void  deposite(float y){
			
			balance=balance+y;
		}
		
		void view(){
			cout<<AccNo<<endl;
			cout<<balance<<endl;
		}
		
	
};

int main()
{
	ABC f;
	f.newACC(123,300.30);
	f.view();
	
	f.deposite(200);
	f.view();
	return 0;
}