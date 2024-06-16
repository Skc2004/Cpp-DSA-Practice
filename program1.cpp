#include<iostream>
using namespace std;

int main()
{
    int n;
    int a;
    int b;
    int s;
    cout << "MENU:-" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulus" << endl; 
    cout << "Enter your choice from 1 to 5 :- " << endl;
    cin >> n;
    cout << "\n" << endl;
    cout << "Enter first number: ";
    cin >> a;
    cout << endl;
    cout << "Enter second number: ";
    cin >> b;
    switch (n)
    {
    case 1:
        s=a+b;
        cout << "The Addition result is: " << s << endl;
        break;
    
    case 2:
        s=a-b;
        cout << "The Subtraction result is: " << s << endl;
        break;

    case 3:
        s=a*b;
        cout << "The Multiplication result is: " << s << endl;
        break;

    case 4:
        s=a/b;
        cout << "The Division result is: " << s << endl;
        break;

    case 5:
        s=a%b;
        cout<< "The Modulus result is: " << s << endl;

    default:
        cout << "Wrong Choice!!!" << endl;
        break;
    }
    return 0;
}