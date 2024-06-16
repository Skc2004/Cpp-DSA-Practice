#include<iostream>
#include<random>
#include<time.h>
using namespace std;

int prompt();
int n;

int main()
{
    srand(time(NULL));
    int random = rand()%9;   
    prompt();
    while(n!=random)
    {
        cout << "Wrong guess !!!\n";
        prompt();
    }
    cout << "Well guessed !" << endl;
    return 0;
}

int prompt()
{
    cout << "Enter your guess: ";
    cin >> n;
}