class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int> mp;
    
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]+=1;
    }
    
    int maxcount=0;
    
    
    for(auto &m:mp)
    {
        if(m.second > (nums.size()/2))
            {
                return m.first;
            }
            
    }
    
    return -1;
    }
};