class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i, j, k;
    vector<vector<int>> triplets;
	sort(nums.begin(),nums.end());
    int n = nums.size();
    for (i = 0; i < n - 1; i++)
    {
		if(i > 0 && nums[i] == nums[i-1]) continue;

		j=i+1;
		k=n-1;

		while (j<k)
		{
			int sum=nums[i] + nums[j] + nums[k];

			if(sum<0) j++;

			else if(sum > 0 ) k--;

			else 
				
			{
				triplets.push_back({nums[i],nums[j],nums[k]});
				j++;
				k--;
				while(j<k && nums[j] == nums[j-1]) j++;
				while(j<k && nums[k] == nums[k+1]) k--;
			}

		}
		
    }

    return triplets;

    }
};