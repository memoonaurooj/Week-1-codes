#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;
	for(int i=0;i<5;i++)
	{
		cout<<"enter value";
		cin>>arr[i];
	}
	cout<<"values are";
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	bool flag;
	for(int i=0;i<5;i++)
		flag++;
	if(flag==1)
	{
	
	cout<<"value found";
	else
	cout<<"value not found";
   }
}
