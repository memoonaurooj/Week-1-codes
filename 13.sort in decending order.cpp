#include<iostream>
using namespace std;
int main ()
{
    int num[5];
    int i, j, desc;
    cout<<"Enter 5 Numbers : \n";
    cout<<" ";
    for (i = 0; i < 5; ++i)
    cin>>num[i];
    for (i = 0; i < 5; ++i)   
    {
     for (j = i + 1; j < 5; ++j)
        {
     if (num[i] < num[j])
            {
                desc = num[i];
                num[i] = num[j];
                num[j] = desc;
    }
    }
    }
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i < 5; ++i)
    {
        cout<<" ";
        cout<<num[i];
        cout<<"\n";
		}
}



