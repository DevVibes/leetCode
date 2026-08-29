class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        int e=0;
        for(auto m:mp)
        {
            if(m.second == 2)
                e=e^m.first;
        }

return e;
    }
};