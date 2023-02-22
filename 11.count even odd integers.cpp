#include<iostream>
using namespace std;
int main()
{
	int arr[5],even=0,odd=0,i;
cout<<"Enter five numbers";
for(int i=0;i<5;i++)
cin>>arr[i];
for(int i=0;i<5;i++)	
{
	if(arr[i]%2==0)
	even++;
	else
	odd++;
	}
	cout<<"the even are"<<even;
	cout<<"odd num are"<<odd;
	cout<<endl;

}
