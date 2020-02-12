#include <iostream>

using namespace std;

int main()
{
    int i=1, n;

    cout<<"Enter any number to print the table:";
    cin>>n;

    cout<<"Table of "<<n<<endl;

    do{

        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;

    }while(i<=10);

    return 0;
}
