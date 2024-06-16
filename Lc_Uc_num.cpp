#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character to check whether it's a number, lowercase letter or uppercase letter : " << endl;
    cin >> ch;
    if(ch>=48 && ch<=57)
    {
        cout << "The entered character is a digit !!! " << endl ;
    }
    else if (ch>=65 && ch<=90)
    {
        cout << "The entered character is a Upper Case Letter !!! " << endl ;
    }
    else
    {
        cout << "The entered character is a Lower Case Letter !!! " << endl ;
    }
    
}