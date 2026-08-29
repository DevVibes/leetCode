class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mp;

        

        int e=0;
        for(int n:nums)
        {
            if(mp.contains(n))
                e=e^n;
            mp[n]++;
        }

return e;
    }
};