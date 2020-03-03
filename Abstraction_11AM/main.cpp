#include <iostream>

using namespace std;

class Abstraction
{
    private:
    int a, b;

    public:

        void setAdd(int x, int y)
        {
            a = x;
            b = y;
        }

        void getDisplay()
        {
            cout<<"Addition is:"<<a+b;
        }
};


int main()
{
    Abstraction obj;
    obj.setAdd(10,30);
    obj.getDisplay();
    return 0;
}
