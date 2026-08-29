class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mp;

        

        int e=0;
        for(int n:nums)
        {
            if(mp[n]==1)
                e=e^n;
            mp[n]++;
        }

return e;
    }
};