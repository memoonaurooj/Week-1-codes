#include<iostream>
using namespace std;
int main()
{

int arr[5];
    int i, j, temp; 
    cout<<"Enter elements in array: ";
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
}
