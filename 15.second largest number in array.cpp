#include<iostream>
using namespace std;
int main()
{
  
 int i, arr[5], largest, second;
   
      cout<<"Enter Array Element\t";
      for(i=0;i<5;i++)
      cin>>arr[i];
   
   
   if(arr[0]<arr[1]){ 
      largest = arr[1];
      second = arr[0];
   }
   else{ 
      largest = arr[0];
      second = arr[1];
   }
   
     
      if (arr[i] > largest) {
         second = largest;
         largest = arr[i];
      }
     
      else if (arr[i] > second && arr[i] != largest) {
         second = arr[i];
      }
   
   cout<<"Second Largest Element in array is: "<<second;
   return 0;
}


