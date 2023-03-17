#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans,i;
        sort(nums.begin(),nums.end());
        for(i=0;i<=n;i++){
            if(nums[i]!=i){
                ans = i;
                break;
            }
        }
        return ans;
    }

int main()
{
    int v = INT_MAX;
    vector<int> v = {0,1};
    cout<<missingNumber(v);
    return 0;
}