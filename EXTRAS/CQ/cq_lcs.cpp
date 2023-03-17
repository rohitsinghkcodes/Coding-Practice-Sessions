#include<bits/stdc++.h>
using namespace std;

// int lcs(vector<int> arr, int n)
// {
//     int lis[n];
//     lis[0] = 1;
 
//     /* Compute optimized LIS values in
//        bottom up manner */
//     for (int i = 1; i < n; i++) {
//         lis[i] = 1;
//         for (int j = 0; j < i; j++)
//             if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
//                 lis[i] = lis[j] + 1;
//     }
 
//     // Return maximum value in lis[]
//     return *max_element(lis, lis + n);
// }
int lcs(vector<int> a,int n)
{
    unordered_set<int> s;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(!(s.find(a[i]-1)!= s.end()))
        {
            int j = a[j];
        
        while(s.find(a[i]-1)!= s.end()) j++;
        if(ans < j - a[i])
        {
            ans = j-a[i];
        }
        }

    }
    return ans;
}

int main()
{
    vector<int> v = {10,101,1000};
    int size = v.size();
    cout<<lcs(v,size);

    
    return 0;
}