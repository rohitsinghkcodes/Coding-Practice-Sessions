#include<bits/stdc++.h>
using namespace std;
int main()
{
        vector<int> v(5);
        int flag=0;
        int dup = 0;
        for(int i=0;i<5;i++)
        {
            cin>>v[i];

        }
       map<int,int>mp;
       for(int x:v) mp[x]++;
       for(auto x:mp)
       {
        if(x.second>1)

        {
            cout<<x.first;
            exit(0);

        }
       }
       int max = -999;
       for(int x:v)
           {
               if(max<x)
               {
                   max = x;
               }
           }
           cout<<max;

    return 0;
}