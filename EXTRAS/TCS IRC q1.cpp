#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ans = "";
    string name;
    getline(cin,name);
    for(char c:name){
        if(isalpha(c))
        {
        int no  = int(c)+5;
        ans+=char(no);
        }
        else{
            ans+=c;
        }
    }
    cout<<ans;

    return 0;
}