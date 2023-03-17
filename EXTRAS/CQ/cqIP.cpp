#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ip="255.255.1.2";
    int c=0;
    string a,b,c,d;
    for(int i=0;i<3;i++)
    {
        a += ip[i];

        for(int j=i+1; j<=i+3; j++)
        {
            for(int k=j+1;k<=j+3;k++)
            {
                if(ip.length()-k>-1 && ip.length()-k<=3)
                {
                    c++;
                }
            }
        }
    }
    cout<<c;
    return 0;
}