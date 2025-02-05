#include "bits/stdc++.h"

using namespace std;

vector<int> twoSums(vector<int>& nums, int target);

int main()
{
    

    return 0;
}

vector<int> twoSums(vector<int>& nums, int target)
{
    unordered_map<int, int> hashTable;

    for(int i=0; i<nums.size(); i++)
    {
        int complement = target - nums[i];
        if (hashTable.count(complement)) return {hashTable[complement], i};

        hashTable[nums[i]] = i;

    }

    return {};
}