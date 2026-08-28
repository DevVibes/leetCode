class Solution {
public:
    int singleNumber( vector<int>& nums) {
       int e=nums[0];
       for(int i=1;i<nums.size();i++)
       {
            e = nums[i]^e;//XOR
       }
       return e;
    }
};

