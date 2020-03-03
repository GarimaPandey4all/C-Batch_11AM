#include <iostream>

using namespace std;

class Encapsulation
{
private:
    int x;

public:

    //setter
    void set(int a)
    {
        x = a;
    }

    //getter
    int get()
    {
        return x;
    }
};

int main()
{
    Encapsulation obj;
    obj.set(10);
    cout<<obj.get();
    return 0;
}
