// printing the min distance between the repeating no in vector  and represent in map using stl
//The distance between two array values is the number of indices between them. we will use vector for input and represent them using map so that each no can be represented with their distance
/*Example:  if arr= 1 8 8 5 1 9
            then dis bet 1s is 4, 8s is 1
            */

//Remember 0 represents that the respective no is not repeated in the array.
//here find(a.begin(), a.end(), it) - find(a.begin(), a.end(), a.front()) is used to find the index value of the elementesin the array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &it : a)
        cin >> it;
    map<int, int> mp;
    auto front_ale_add = find(a.begin(), a.end(), a.front());

    // this is to give elements its initial index value
    // note: if value are repeated its index value will be zero 
    for (int &it : a)
    {
        mp[it] = abs(mp[it] - (find(a.begin(), a.end(), it) - front_ale_add));
    }

    //this is for the difference in index values
    for(int i=0; i<a.size(); i++)
    {
        mp[a[i]] = abs(mp[a[i]] -(find(a.begin()+i, a.end(), a[i]) - front_ale_add));
    }

    //printing the result
    for(auto i=mp.begin();i!=mp.end();i++)
    {
        cout<<i->first<<" -> "<<i->second<<endl;
    }

    return 0;
}



// by adding some more lines of code we can also find out the ditance of minimum distanced repeating element in the array

