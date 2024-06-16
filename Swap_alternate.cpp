#include <iostream>
using namespace std;

void swap(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1!=size)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5]={0,12,34,15,7};
    int arr2[6]={2,6,4,8,9,5};

    cout<<"Odd array before swapping: ";
    printArray(arr,5);
    cout<<endl;
    swap(arr,5);
    cout<<"Odd array after swapping: ";
    printArray(arr,5);

    cout<<endl;

    cout<<"Even array before swapping: ";
    printArray(arr2,6);
    cout<<endl;
    swap(arr2,6);
    cout<<"Even array after swapping: ";
    printArray(arr2,6);
}