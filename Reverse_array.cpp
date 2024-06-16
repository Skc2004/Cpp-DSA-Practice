#include <iostream>
using namespace std;

void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int temp;
    while(start<=end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
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
    int arr[8]={1,2,3,6,55,454,5496,4164};
    cout<<"The original array is: ";
    printArray(arr,8);
    reverse(arr,8);
    cout<<endl;
    cout<<"The reversed array is: ";
    printArray(arr,8);
    return 0;
}