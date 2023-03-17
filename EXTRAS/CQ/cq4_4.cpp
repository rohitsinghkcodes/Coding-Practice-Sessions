#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v1={1,2,3,4,5};
    vector<int>v2 = {1,2,4,5};
    int r =0;
    for(auto x:v1)
    {
        r = r^x;
    }
    for(auto x:v2)
    {
        r = r^x;
    }
    cout<<r;
    return 0;
}