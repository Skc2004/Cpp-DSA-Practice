#include <iostream>
using namespace std;

void max_min(int arr[],int size)
{
    int max=arr[0],min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"The Maximum number is: "<<max<<endl;
    cout<<"The Minimum number is: "<<min<<endl;
}

int main()
{
    int arr[5]={6,2,1,4,5};
    max_min(arr,5);
    return 0;
}