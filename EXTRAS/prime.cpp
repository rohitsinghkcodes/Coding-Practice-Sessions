#include<iostream>
using namespace std;

bool isPrime(int val)
{
    for(int j=2;j*j<=val;j++)
    {
        if(val%j==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int c=0;
    for(int i=2;i<=10;i++)
    {
        if(isPrime(i))
        {
            cout<<endl<<i<<endl;
            c++;
        }

    }
        cout<<"count = "<<c;
    return 0;

}