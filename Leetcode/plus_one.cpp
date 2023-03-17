#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> digits = {9};
    int last_ind = digits.size() - 1;
    while (last_ind >= 0 && digits[last_ind] == 9)
    {
        digits[last_ind] = 0;
        last_ind--;
    }
    if (last_ind >= 0)
    {
        digits[last_ind]++;
    }
    else
    {
        digits.insert(digits.begin(), 1);
    }


cout << endl;
for (auto x : digits)
{
    cout << x << ",";
}
return 0;
}