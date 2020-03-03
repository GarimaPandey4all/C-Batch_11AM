#include <iostream>

using namespace std;

//Base Class
class Parent
{
public:
    int parent_id;
};

//Derived Class 1
class Child1 : public Parent
{
public:
    int child1_id;
};

//Derived Class 2
class Child2 : public Child1
{
public:
    int child2_id;
};


int main()
{
    Child2 obj;
    obj.parent_id=1;
    obj.child1_id=2;
    obj.child2_id=3;

    cout<<"Parent is:"<<obj.parent_id<<endl;
    cout<<"Child1 is:"<<obj.child1_id<<endl;
    cout<<"Child2 is:"<<obj.child2_id;

    return 0;
}
