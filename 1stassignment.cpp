#include<iostream>
using namespace std;
int missing(int arr[],int n)
{
    int sum = 0;
    int i,s;
    
    for(i=0;i<n-1;i++)
    {
        sum = sum+arr[i];
    }
    
    s= n*(n+1)/2;
    return (s-sum);
}
int main()
{    int j,n,a[n];
    cout<<"enter the size of array \n";
    cin>>n;
    cout<<"enter the array elements \n";
    for(int j=0;j<n-1;j++)
    {
        cin>>a[j];
    }
    
    int miss = missing(a,n);
    cout<<"Missing element is "<< miss<<endl;
}