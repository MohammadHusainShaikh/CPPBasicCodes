#include<iostream>

using namespace std ;

int main()
{
	int elementNo ;
	cout<<"Enter No of Element :";
	cin>>elementNo;
	
	int arr[elementNo];
	cout<<"Enter Elements Value :";
	for(int i=0 ; i<elementNo ; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Unsorted Elements :";
	for(int i=0 ; i<elementNo ; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	for(int i=1 ; i<elementNo ; i++)
	{
		for(int j=0 ;j<elementNo-1 ; j++)
		{
			
			if(arr[j]>arr[j+1])
			{ 
				int temp ;
				
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		
		cout<<"\nAfter Pass"<< i << endl;
		for(int k=0 ; k<elementNo ; k++)
		{
			cout<<arr[k]<<" ";
		}
	}
	
	return 0;
}