#include<iostream>

using namespace std;

const int MAX=10;

int main()
{
	int MAX=5;
	
	cout <<"ADDITION OF LOCAL AND GLOBAL VARIABLE :" << ::MAX+MAX;
}