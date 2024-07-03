#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans ;
        int j=0;
        int comp=target-nums[j];
        int n=*max_element(nums.begin(),nums.end());
        vector <int> hash(n);
        for (int i=0;i<nums.size();i++){
            hash[nums[i]]++;
            if (hash[comp]==1){
                ans.push_back(has)
            }

        }

        

    }
};
int main()
{

    return 0;
}