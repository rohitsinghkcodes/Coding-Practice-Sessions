#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {12,27,14,11,25,6,7};
    vector<int> ans;
    int max = -999;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]>max)
        {
            ans.push_back(v[i]);
            max = v[i];
        }
    }

    for(int x:ans)cout<<x<<" ";
    return 0;
}