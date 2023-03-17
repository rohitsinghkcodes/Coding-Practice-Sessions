#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c = 0;
    string s = "acid";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            c+=s.length()-i;
        }
    }
    cout<<c;
    return 0;
}