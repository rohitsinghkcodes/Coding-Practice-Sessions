#include<iostream>
using namespace std;
int main()
{
    char s[35];
    int count;
   cin.getline(s,35);
   for(int i=0;s[i]!='\0';i++)
   {
       cout<<s[i]<<endl;
   }
    cout<<count<<endl;
    return 0;
}