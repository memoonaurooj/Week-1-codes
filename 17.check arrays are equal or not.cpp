#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int arrays_equal(int arr1[], int arr2[], int n, int m)
{
sort(arr1,arr1+n);
sort(arr2,arr2+m);
int i;
for(i = 0; i < n; i++)
{
if(arr1[i] != arr2[i])
{
return 0;
}
}
}

int main()
{
//fill your code
int n, m;
cin >> n >> m;
int arr1[n], arr2[m];
for(int i = 0; i < n; i++)
{
cin >> arr1[i];
}
for(int i = 0; i < m; i++)
{
cin >> arr2[i];
}
if(n != m)
cout << "not same";
else
{
if(arrays_equal(arr1, arr2, n, m) == 0)
cout << ?"not same";
else
cout << "same";
}

}
