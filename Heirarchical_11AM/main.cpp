#include <iostream>

using namespace std;

//Base Class
class Vehicle
{
public:
    Vehicle()
    {
        cout<<"This is Vehicle Class"<<endl;
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
        cout<<"This is Car Class"<<endl;
    }
};

class Bus : public Vehicle
{
public:
    Bus()
    {
        cout<<"This is Bus Class"<<endl;
    }
};

int main()
{
    Car C;
    Bus B;
    return 0;
}
