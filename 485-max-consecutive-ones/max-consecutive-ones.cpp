class Solution {
public:
    int findMaxConsecutiveOnes(const vector<int>& nums) {
        int maxLen=0;
	int n=nums.size();
	int j=0;
	
	while(j<n)
	{
		int count = 0;
		if( nums[j] == 1)
		{
			while(j<n && nums[j]==1 )
			{
				count++;
                j++;
			}
			
			if(count > maxLen)
				maxLen = count;
		}
		else
			j++;
	}
	return maxLen;
    }
};