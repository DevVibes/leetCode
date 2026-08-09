class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int> mp;
    
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]+=1;
    }
    
    int maxcount=0;
    int result=-1;
    
    for(auto &m:mp)
    {
        if(m.second > (nums.size()/2))
            {
                maxcount = m.second;
                result = m.first;
            }
            
    }
    
    return result;
    }
};