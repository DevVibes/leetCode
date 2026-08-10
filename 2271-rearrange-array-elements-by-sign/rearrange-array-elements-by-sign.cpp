class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg, pos;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] <0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }

        nums.erase(nums.begin(), nums.end());

        for(int i=0;i<pos.size();i++)
        {
           nums.push_back(pos[i]);
           nums.push_back(neg[i]);
        }

        return nums;
    }
};