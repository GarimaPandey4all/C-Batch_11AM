#include <iostream>

using namespace std;

int main()
{
    int matrix1[2][2], matrix2[2][2], result[2][2], i, j;

    cout<<"Enter values in Matrix1:";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter values in Matrix2:";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cin>>matrix2[i][j];
        }
    }

    cout<<"Enter values in Matrix1:\n";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<matrix1[i][j]<<"\t";
            if(j==1)
                cout<<endl;
        }
    }

    cout<<"Enter values in Matrix2:\n";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
           cout<<matrix2[i][j]<<"\t";
            if(j==1)
                cout<<endl;
        }
    }

    cout<<"Addition of Two matrixes:";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
           result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout<<"Addition of Two matrixes:\n";
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
           cout<<result[i][j]<<"\t";
            if(j==1)
                cout<<endl;
        }
    }

    return 0;
}
