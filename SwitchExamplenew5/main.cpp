#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    char Operator;

    cout<<"Enter any Operator:";
    cin>>Operator;

    switch(Operator)
    {
    case '+':
        cout<<"Enter value for A:";
        cin>>a;

        cout<<"Enter value for B:";
        cin>>b;

        c = a + b;
        cout<<"Addition is:"<<c;
        break;

    case '-':
        cout<<"Enter value for A:";
        cin>>a;

        cout<<"Enter value for B:";
        cin>>b;

        c = a - b;
        cout<<"Subtraction is:"<<c;
        break;

    case '*':
        cout<<"Enter value for A:";
        cin>>a;

        cout<<"Enter value for B:";
        cin>>b;

        c = a * b;
        cout<<"Multiplication is:"<<c;
        break;

    case '/':
        cout<<"Enter value for A:";
        cin>>a;

        cout<<"Enter value for B:";
        cin>>b;

        c = a / b;
        cout<<"Division is:"<<c;
        break;

    default:
        cout<<"You have entered the wrong operator";

    }

    return 0;
}
