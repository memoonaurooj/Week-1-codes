#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter value"<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"Enter value";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int min=arr[0];
	for(int i=0;i<5;i++)
	if(min>arr[i])
	min=arr[i];
	cout<<"min value is"<<min;
}
