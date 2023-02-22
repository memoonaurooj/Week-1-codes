#include<iostream>
using namespace std;
int main()
{
int first , second,i,arr[5];
    // Enter the elements
    cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < 5; i++)
	{
        cin >> arr[i];
    }
   

   for(int i=0; i<5; i++){
       if(arr[i] < first){
	    second = first;
		 first = arr[i];
		  } 
		  else if(second>arr[i])
           second = arr[i];
    }

    cout<<"second smallest number is\t"<<second<<endl;
}
	
		 
    

