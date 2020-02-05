#include <iostream>

using namespace std;

int main()
{
    int A, B, C;

    cout<<"Enter value for A:";
    cin>>A;

    cout<<"\nEnter value for B:";
    cin>>B;

    //Addition

    C = A + B;

    cout<<"\nAddition is:"<<C;

    //Subtraction

    C = A - B;

    cout<<"\nSubtraction is:"<<C;

    //Multiply

    C = A * B;

    cout<<"\nMultiply is:"<<C;

    //Division

    C = A / B;

    cout<<"\nDivision is:"<<C;

    //Modulus

    C = A % B;

    cout<<"\nRemainder is:"<<C;

    //Increment: Pre and Post

    cout<<"\nPre-Increment is:"<<++A; // A = 2

    cout<<"\nPost-Increment is:"<<A++; // A = 4

    cout<<"\nA is:"<<A;

    //Decrement: Pre and Post

    cout<<"\nPre-Decrement is:"<<--B; // B =4

    cout<<"\nPost-Decrement is:"<<B--;

    cout<<"\nB is:"<<B;

    return 0;
}
