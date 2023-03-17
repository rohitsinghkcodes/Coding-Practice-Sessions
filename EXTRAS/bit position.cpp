#include<bits/stdc++.h>
using namespace std;
int main()
{
    char res[1000];
    int no;
    int pos;
    cout<<"Enter some number:";
    cin>>no;
    cout<<"Enter some position:";
    cin>>pos;
    itoa(no,res,2);
    for(int i=pos;i<=pos+3;++i)
    {
        cout<<res[i];
    }

    //if bit is given as integer
    // int bit = 1010111010;
    // int len = ceil(log10(bit)) - (pos+3);
    // int newBit = bit / int(pow(10,len));
    // cout<<newBit%10000;

    return 0;
}
