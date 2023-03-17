#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "codem code quest";
    string s2 = "code";
    string ans = "";
    int count=0;
    for(char c:s1)
        {if(c!=' ')
        {
        ans+=c;
        }
        if(c ==' ')
        {
            if(s2==ans)
            {
                count++;
            }
            ans = "";
        }
    }
cout<<count;
    return 0;
}