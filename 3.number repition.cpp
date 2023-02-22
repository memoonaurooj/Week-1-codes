#include<iostream>
using namespace std;
int main()
{
int number,arr[5];
cout<<"Enter five numbers";
for(int i=0;i<5;i++)
{
cout<<"Enter value"<<i+1<<":";
cin>>arr[i];	
}
for(int i=0;i<5;i++)
{
cout<<arr[i]<<"\t";	
}
cout<<endl;
cout<<"Enter the number you want to check for repetition";
cin>>number;
int count=0;
for(int i=0;i<5;i++)
{
	if(number==arr[i])
	{
		count++;
	}
	}
	cout<<"the number repetition is"<<count<<endl;	
}

