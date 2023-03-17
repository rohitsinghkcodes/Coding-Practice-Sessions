// incomplete
// incomplete
// incomplete
// incomplete
// incomplete
// incomplete
// incomplete

#include<bits/stdc++.h>
using namespace std;

void insertSort(vector<int> v)
{
    int len = v.size();
    for(int i=0;i<len;i++)
    {
        int k=v[i];
        int m = i-1;
        bool check=false;
        while(m>=-1 and check==false)
        {
           if(k<v[m])
           {
               v[m+1]=v[m];
               m--;
           }
           else
           {
               v[m+1]=10;
               m--;
               check=true;
           }
        }
        for(int &it:v) cout<<it<<" ";
            cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;

    insertSort(v);

}