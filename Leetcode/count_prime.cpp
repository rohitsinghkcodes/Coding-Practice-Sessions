#include<bits/stdc++.h>
using namespace std;

     int countPrimes(int n) {
         if(n==0) return 1;
        else if(n==1) return 0;
        int c=0,i,j;
        for( i=2;i<n;i++){
            for( j=2; j<=n;j++)
            {
                if(i%j==0) break;
            }
            
            if(j==n)c++;
        }
        return c;
    
    }

int main()
{
    int n;
    cin>>n;
    cout<<endl<<countPrimes(n);
    return 0;
}