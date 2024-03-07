#include<iostream>
#include<string.h>

using namespace std;

class student
{
    int rno;
    char name[50];
    double fee;
   
    public:
    	
    student(int,char[],double);
    
    student(student &t)       //copy constructor
    {
        rno=t.rno;
        strcpy(name,t.name);
        fee=t.fee;
    }
    
	void display();
     
};
 
 
 
 
    student::student(int no,char n[],double f)
    {
        rno=no;
        strcpy(name,n);
        fee=f;
    }    
 
   void student::display()
    {
        cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
    }
     
int main()
{
    student s(1001,"Husain",10000);
    s.display();
     
    student husain(s);   //copy constructor called
    husain.display();
     
    student c=s;
    c.display();
    return 0;
}