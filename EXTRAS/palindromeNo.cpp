#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x<0)cout<<"False"<<endl;
    else
    {
        int val,rev=0;
        int k = x;
        while(x!=0)
        {
            val = x%10;
            x = x/10;
            rev = (rev*10)+val;
        }
        if(rev==k)cout<<"True"<<endl;
    }
    
    return 0;
}