#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 15;
    cout << "Before: " << a << " " << b << endl;
    swap(a, b);
    cout << "After: " << a << " " << b << endl;
    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}