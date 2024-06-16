#include<iostream>
using namespace std;

int sum(int arr[],int size)
{
    int sum =0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int arr[5];
    cout<<"Enter the elements of array:- "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int sumres=sum(arr,5);
    cout<<"The sum of the elements of the array is : "<<sumres <<endl; 
}