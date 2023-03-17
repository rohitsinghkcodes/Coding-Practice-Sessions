#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

int calBin(int no)
{
    int i=1,bin=0,d;
    while(no!=0)
    {
        d = no%2;
        no = no/2;
        bin += (d*i);
        i*=10;
    }
    return bin;
}
int main()
{
    int n;
    cin>>n;
    int i = 0;
    int k = pow(2,n);
    while(i<=k)
    {
        cout<<calBin(i)<<endl;
        i++;

    }
    return 0;
}

// C++ implementation of the approach