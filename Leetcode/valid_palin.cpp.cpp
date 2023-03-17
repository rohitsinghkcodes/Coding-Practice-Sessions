#include<bits/stdc++.h>
using namespace std;

 bool isPalindrome(string s) {
        string s2="";
        for(char c:s)
        {
            if(isalnum(c))s2+=tolower(c);
        }
        
        string s3 = s2;
        reverse(s3.begin(),s3.end());
        return (s2==s3);
        
    }

int main()
{
    string s = "A man, a plan, a canal: Panama";
    cout<<isPalindrome(s);
    
    return 0;
}