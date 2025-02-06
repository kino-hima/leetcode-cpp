#include "bits/stdc++.h"

using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> uset;

    for(int i=0; i<nums.size(); i++)
    {
        if(uset.count(nums[i]))
        {
            return true;
        }
        else
        {
            uset.insert(nums[i]);
        }
    }
    return false;
}