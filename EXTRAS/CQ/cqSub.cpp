#include<bits/stdc++.h>

using namespace std;

void printSubstrings(string str)
{
    transform(str.begin(), str.end(), str.begin(), ::tolower);

int c=0;
	// First loop for starting index
	for (int i = 0; i < str.length(); i++) {
		string subStr;
		// Second loop is generating sub-string
		for (int j = i; j < str.length(); j++) {
			subStr += str[j];
            if(subStr[0]=='a'|| subStr[0]=='e'||subStr[0]=='i'||subStr[0]=='o'||subStr[0]=='u')
            {
                c++;
            }
		}
	}
    cout<<c;
}

// Driver Code

int main()
{
	string str = "makeOveR";
	printSubstrings(str);
	return 0;
	// this code is contributed by defcdr
}
