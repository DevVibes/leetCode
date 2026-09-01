class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int e=0;
        for(int i=0;i<nums.size();i++)
        {
            e^=nums[i];
        }
        return e;
    }
};