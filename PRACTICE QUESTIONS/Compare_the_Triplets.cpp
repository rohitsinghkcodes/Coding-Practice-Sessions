#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int p1=0,p2=0;
    vector<int> v1(3),v2(3);
    for(int &it:v1) cin>>it;
    for(int &it:v2) cin>>it;
    for(int i=0;i<3;i++)
    {
        if(v1[i]>v2[i]) p1++;
        else if(v1[i]<v2[i]) p2++;
    }

    cout<<p1<<" "<<p2<<endl;
    
    return 0;
}