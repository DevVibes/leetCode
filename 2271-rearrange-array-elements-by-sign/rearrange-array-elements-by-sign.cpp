class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int negIndex = 1, posIndex = 0;

        vector<int> res (nums.size(),0);

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
                {
                    res[negIndex] = nums[i];
                    negIndex+=2;
                }
            else{
                    res[posIndex] = nums[i];
                    posIndex+=2;
                }
        }


        return res;
    }
};