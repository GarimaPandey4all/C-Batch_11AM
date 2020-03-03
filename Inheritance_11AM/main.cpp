#include <iostream>

using namespace std;


/*
    Inheritance:

    1. Single
    2. Multiple
    3. Multilevel
    4. Heirarchical
    5. Hybrid: Multiple + Heirarachical

*/

//Parent Class
class Parent
{
public:
    int id_parent;
};

//Derived Class
class Child : public Parent
{
public:
    int id_child;
};

int main()
{
    Child c1;
    c1.id_child=10;
    c1.id_parent=20;

    cout<<"Child is:"<<c1.id_child<<endl;
    cout<<"Parent is:"<<c1.id_parent;

    return 0;
}
