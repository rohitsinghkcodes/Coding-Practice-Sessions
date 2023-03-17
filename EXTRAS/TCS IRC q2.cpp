// may be wrong because not sure about what the test cases were.


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int  arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
        }
        if(sum==0)
        {
            ans=1;
            break;
        }
        cout<<"sum: "<<sum<<endl;
    }
    if(ans==1)
    {
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}