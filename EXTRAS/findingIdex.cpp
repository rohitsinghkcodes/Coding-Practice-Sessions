//finding index value of gfg in vector of strings
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<string> v{"This" , "is" , "for", "GFG", "say" , "hello"};
    string ele = "GFG"; 
    int index = find(v.begin(),v.end(),ele) - find(v.begin(),v.end(),v.front());
    //index value is from 0
    cout<<"Index value of GFG in vector is: "<<index<<endl;
    return 0;
}