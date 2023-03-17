#include<iostream>
#include<string>
#include<stdlib.h>
#include<bits./stdc++.h>
using namespace std;
int  main()
{
    char s[100];
    cin.getline(s,100);
    for(char c:s)
    {
        if(c=='\0')
        {
            break;
        }
        if(c=='i')
        {
            cout<<"* "<<c;
        }
        else{
            cout<<c;
        }
    }
}