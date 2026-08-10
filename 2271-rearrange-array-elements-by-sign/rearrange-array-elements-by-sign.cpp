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


        for(int i=0;i<pos.size();i++)
        {
          nums[i*2] = pos[i];
          nums[i*2+1] = neg[i];
        }

        return nums;
    }
};