#include<bits/stdc++.h>
using namespace std;

int bin_search(vector<int> v,int beg,int end,int n)
{
    if(end>=1){
    int mid = (beg+(end-beg))/2;
    if(v[mid]==n)return 1;
    if(v[mid]>n) bin_search(v,beg,mid-1,n);
    else bin_search(v,mid+1,end,n);
    }
    return 0;
}

int main()
{
    int val,n;
    cin>>n>>val;
    vector<int> v(n);
    for(int &it:v)cin>>it;
    if(bin_search(v,0,v.size(),val)) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    return 0;
}