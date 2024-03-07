#include<iostream>

using namespace std;

class shop{
	
	private :
		string item;
		int price;
		int qua;
		int c_pri;
		int s_pri;
		int pro;
		int t_pro;
		
		
		public :
		void u_item(std::string u)
		{
			item=u;
		}
		
		void quan(int q)
		{
			qua=q;
		}
		
		void c_price(int c)
		{
			c_pri=c;
		}
		
		void s_price(int s)
		{
			s_pri=s;
		}
		
		void profit()
		{
			 			
			pro=s_pri-c_pri;
		}
		
		void tot_pro()
		{			 
			t_pro=qua*pro;
		}
		
		void dispaly(){
			
			cout<<item<<endl;
			cout<<qua<<endl;
			cout<<c_pri<<endl;
			cout<<s_pri<<endl;
			cout<<pro<<endl;
			cout<<t_pro<<endl;
		}
		
};

int main()
{
	shop x;
	x.u_item("chai");
	//x.i_price(20);
	x.quan(10);
	x.c_price(15);
	x.s_price(25);
	x.profit();
	x.tot_pro();
	
	x.dispaly();
	return 0;
	
}