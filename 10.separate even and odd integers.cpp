#include<iostream>
using namespace std;
int main()
{
	int arr[5],even[5],odd[5],evencount=0,oddcount=0,i;
cout<<"Enter five numbers";
for(int i=0;i<5;i++)
cin>>arr[i];
for(int i=0;i<5;i++)	
{
	if(arr[i]%2==0)
	even[evencount++]=arr[i];
	else
	odd[oddcount++]=arr[i];

	}
	cout<<"the even are";
	for(i=0;i<evencount;i++)
	cout<<even[i]<<"";
	cout<<"odd num are";
	for(i=0;i<oddcount;i++)
	cout<<odd[i]<<"";

}
