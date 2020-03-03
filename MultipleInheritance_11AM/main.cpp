#include <iostream>

using namespace std;

class parent1
{
public:
    int parent1_id;
};

class parent2
{
public:
    int parent2_id;
};

class Child : public parent1 , public parent2
{
public:
    int child_id;
};

int main()
{
    Child c1;
    c1.child_id=2;
    c1.parent1_id=4;
    c1.parent2_id=6;

    cout<<"Child Class:"<<c1.child_id<<endl;
    cout<<"Parent1 Class:"<<c1.parent1_id<<endl;
    cout<<"Parent2 Class:"<<c1.parent2_id;

    return 0;
}
