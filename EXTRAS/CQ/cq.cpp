#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;

    map<int,int>mp;
    for(int x:v){
        mp[x]++;
    }
    int max = -999;
    int ind;
    for(auto x:mp)
    {
        if(x.second>max)
        {
            max = x.second;
            ind = x.first;
        }
    }
    cout<<ind;
    return 0;
}