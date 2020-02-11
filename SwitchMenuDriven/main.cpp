#include <iostream>

using namespace std;

int main()
{
    int choice;

    while(1){

    cout<<"\nEnter your choice:";
    cout<<"\nPress 1. Even-Odd";
    cout<<"\nPress 2. X-OR";
    cout<<"\nPress 3. Area of Rectangle";
    cout<<"\nPress 4. Largest number b/w three Numbers";
    cout<<"\nPress 5. Area of Perimeter";
    cout<<"\nPress 6. Pre-Increment";
    cout<<"\nPress 7. Post-Decrement";
    cout<<"\nPress 8. Exit\n";
    cin>>choice;

    switch(choice)
    {
    case 1:
        int number, remainder;

        cout<<"Enter any Number:";
        cin>>number;

        remainder = number % 2;

        (remainder == 0) ? cout<<"Number is Even" : cout<<"Number is Odd";

        break;

    case 2:
        int a, b;

        cout<<"Enter value for a and b:";
        cin>>a>>b;

        cout<<"AND Operator is:\n\n"<<(a^b);

        break;

    case 3:
        int length, breadth;

        cout<<"Enter value for length and breadth of rectangle:";
        cin>>length>>breadth;

        cout<<"Area of Rectangle is:\n\n"<<length * breadth;

        break;

    case 4:
        int a1, b1, c1, Largest;

        cout<<"Enter any Value";
        cin>>a1>>b1>>c1;

        Largest = (a1>b1) ? ((a1>c1)?a1:c1) : ((b1>c1)?b1:c1);

        cout<<"Largest Number is:\n\n"<<Largest;

        break;

    case 5:
        int length1, breadth1;

        cout<<"Enter value for length and breadth of rectangle:";
        cin>>length1>>breadth1;

        cout<<"Perimeter of Rectangle is:"<<(2 *(length1 + breadth1))<<endl<<endl;

        break;

    case 6:
        int d;

        cout<<"Enter any Value:";
        cin>>d;

        cout<<"Pre-Increment is:"<<++d<<endl<<endl;

        break;

     case 7:
        int e;

        cout<<"Enter any Value:";
        cin>>e;

        cout<<"Post-Decrement is:"<<e--<<endl<<endl;

        break;

     case 8:
        exit(0);

     default:
        cout<<"You have Entered the wrong case.\n";

    }
}
    return 0;
}
