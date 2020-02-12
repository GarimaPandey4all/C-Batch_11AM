#include <iostream>
#define MONTHS 12

using namespace std;

int main()
{
    //const int MONTHS = 12;

//    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    int index;
//
//    for(index = 0; index<MONTHS; index++)
//        cout<<"Month "<<index+1<<" has "<<days[index]<<" days."<<endl;


//For Loop


    int n, i;

    cout<<"Enter any number to print the table:";
    cin>>n;

    cout<<"Table of "<<n<<endl;

    for(i=1; i<=10; i++)
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;

    return 0;
}
