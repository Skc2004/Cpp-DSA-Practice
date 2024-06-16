#include <iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[]={2,5,1,8,3,0,1,-88,-1};
    int key;
    cout<<"Enter the number to be searched in the array: ";
    cin>>key;
    bool found=search(arr,7,key);
    if(found)
    {
        cout<<"The input number is present in the array! "<<endl;
    }
    else
    {
        cout<<"The input number is not present in the array! "<<endl;
    }
    return 0;
}