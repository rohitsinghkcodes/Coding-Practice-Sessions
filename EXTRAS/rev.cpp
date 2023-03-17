#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    int rev = 0;
    int a = 0;
    while (x)
    {
        a = x % 10;
        x /= 10;

        rev = (rev * 10) + a;
    }

    return rev;
}

int main()
{
    int no = reverse(-123);
    cout << no;
    return 0;
}