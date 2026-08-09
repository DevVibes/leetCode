class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el, c = 0;

        for(int i= 0;i<nums.size();i++)
        {
            if(c == 0 )
                {
                    c = 1;
                    el = nums[i];
                }
            else if(nums[i] == el)
            {
                c++;
            }
            else 
                c--;
        }

        return el;
    }
};