#include<iostream>
using namespace std;

class Checking{
    const static int val = 90;
    public:
    static void valPrint()
    {
        cout<<val;
    }
};

int main()
{
    Checking c;
    c.valPrint();

    return 0;
}