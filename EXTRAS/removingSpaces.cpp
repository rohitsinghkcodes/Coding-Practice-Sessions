#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str = "GFG is Fun";
    cout<<"String Before: "<<str<<endl;
    str.erase(remove(str.begin(),str.end(),' '),str.end());
    cout<<"String After: "<<str<<endl;
    return 0;
}