#include <iostream>

using namespace std;

int main()
{
    //traditional way

    int array[5] = {2, 6, 7,89, 90};

    //designated way

    int array[5] = {[3]=3};

    int array[5] = 5;
    int array[] = {2, 6, 7,89, 90};

    int array[][5];


    cout << "Hello world!" << endl;
    return 0;
}
