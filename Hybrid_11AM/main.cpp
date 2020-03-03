#include <iostream>

using namespace std;

/*
Hybrid: Multiple + Heirarchical

*/


class Vehicle
{
public:
    Vehicle()
    {
        cout<<"This is Vehicle"<<endl;
    }
};

class FourWeeler
{
    public:
    FourWeeler()
    {
        cout<<"This is FourWheeler"<<endl;
    }
};

class Car : public Vehicle , public FourWeeler
{
public:
    Car()
    {
        cout<<"This is Car"<<endl;
    }
};

class Bus : public Vehicle
{
public:
    Bus()
    {
        cout<<"This is Bus";
    }
};

int main()
{
    Car C;
    Bus B;
    return 0;
}
