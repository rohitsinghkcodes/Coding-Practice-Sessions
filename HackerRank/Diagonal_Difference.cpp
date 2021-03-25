//UNSOLVED
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0; i<3; i++)
        {
            vector<int> v2(3);
            for(int &it:v2) cin>>it;

            v.push_back(v2);  
                
        }

        for(int i=0; i<3; i++)
        {
            
            for(int &it:v[i]) cout<<it;      
        }

        

    return 0;
}