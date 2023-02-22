#include<iostream>
using namespace std;
int main()
{
	int QUESTIONNUMBER;
	cout<<"please enter a Question number you want to check"<<endl;
	cin>>QUESTIONNUMBER;
		switch(QUESTIONNUMBER)

	{
		case 1:
			{
			
			cout<<"program that will display minimum number"<<endl;
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
	break;
}
	case 2:
		{
		cout<<"program that will display maximum number"<<endl;
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
	int max=arr[0];
	for(int i=0;i<5;i++)
	if(max<arr[i])
	max=arr[i];
	cout<<"max value is"<<max;
	break;
}
	case 3:
		{
			cout<<"locate the given number"<<endl;
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
cout<<"Enter the number you want to locate";
cin>>number;
for(int i=0;i<5;i++)
{
	if(number==arr[i])
	cout<<"the number  is locatee at index number"<<i<<endl;
}
	break;
}
case 4:
	{
		cout<<"program that will display repition of numbers"<<endl;
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
	break;
	}
	case 5:
		{
			cout<<"program that will find list of odd numbers"<<endl;
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
cout<<"The list of odd number is";
for(int i=0;i<5;i++)
{
	if(arr[i]%2!=0)
	cout<<arr[i]<<"\t";
}
				break;
			}
		
		case 6:
			{
			cout<<"program that will print list of even numbers";	
				
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
case 7:
	{
		cout<<"program that will sum elements of array"<<endl;
		int arr[10], i, sum=0;
   cout<<"Enter 10 Array Elements: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   for(i=0; i<10; i++)
      sum = sum+arr[i];
   cout<<"\nSum of all array elements = "<<sum;
   cout<<endl;
   return 0;
		break;
	}
	case 8:
		{
			cout<<"program that will Reverse the given array"<<endl;
			int arr[10], i;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=(10-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
			break;
		}
		case 9:
			{
				cout<<"program that will find unique elements of the array"<<endl;
				int array1[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    int s1 = sizeof(array1)/sizeof(array1[0]);

    cout << "Original array: ";
    
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    
    cout <<"\nUnique elements of the said array: ";
    for (int i=0; i<s1; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (array1[i] == array1[j])
         if (i == j)
          cout << array1[i] << " ";
				break;
		}
	}
	default:
		
		
		cout<<"your entered question number is not valid please enter a valid number";
	
	break;

}
}
