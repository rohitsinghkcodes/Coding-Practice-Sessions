#include<bits/stdc++.h>
using namespace std;
char diff_str(string s,string t)
{
    char r=0;
    for(char c:s)r^=c;
    for(char c:t)r^=c;
    return r;
}

int main()
{
    
    char c = diff_str("GFGisBest","GFGLBietss");
    cout<<c;
    return 0;
}