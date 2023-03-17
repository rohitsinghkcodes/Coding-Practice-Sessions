// C++ program of the above approach
#include <algorithm>
#include <iostream>
using namespace std;

// Function to remove all occurences
// of C from the string S
string removeCharacters(string S, char c)
{

	// S.erase(remove(S.begin(), S.end(), c),S.end());
    (remove(S.begin(), S.end(), c));
	return S;
}

// Driver Code
int main()
{

	// Given String
	string S = "GFG is FFuns buns";
	char C = 'F';
	cout << "String Before: " << S << endl;

	// Function call
	S = removeCharacters(S, C);

	cout << "String After: " << S << endl;
	return 0;
}
