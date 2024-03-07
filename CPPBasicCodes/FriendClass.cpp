#include<iostream>

using namespace std;

class worker{
	int code;
	string name;
	float salary;
	
	public :
		void setdata(int a,std::string b,float c)
		{
			code=a;
			name=b;
			salary=c;
		}
		
	friend class view ;
};

class view{
	
	public:
		void diplay(worker k)
		{
			cout<<"code :"<<k.code<<endl;
			cout<<"name :"<<k.name<<endl;
			cout<<"salary :"<<k.salary<<endl;
		}
};


int main()
{
	worker x;
	x.setdata(5,"husain",8000.0);
	view y;
	y.diplay(x);
	
	
	return 0;
}