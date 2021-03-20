#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }   
    int k=arr[n];
    int i=n-1;
    bool check=false;
    while(i>=0 and check==false)
        {
            cout<<endl;
            if(k<arr[i])
            {
                arr[i+1]=arr[i];
                i--;
            }
            else
            {
                arr[i+1]=k;
                i--;
                check=true;
            }
            for(int i=1; i<=n; i++)
                {
                    cout<<arr[i]<<" ";    
                }
                
                
        }
    return 0;
}