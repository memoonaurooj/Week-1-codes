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
cout<<"The list of even numbers is";
for(int i=0;i<5;i++)
{
	if(arr[i]%2==0)
	cout<<arr[i]<<"\t";	

	}
	
}
