class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
	if (nums.empty()) {
		return res;
	}

	
	sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size(); ++i) {
		
		if (nums[i] > 0) break;

		
		if (i > 0 and nums[i] == nums[i-1]) continue;

		int left = i+1, right = nums.size() - 1;
		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];
			if (sum < 0) {
				++left;
			} else if (sum > 0) {
				--right;
			} else {
				res.push_back({nums[i], nums[left], nums[right]});
				int last_left = nums[left], last_right = nums[right];
				
				while (left < right && nums[left] == last_left) ++left;
				while (left < right && nums[right] == last_right) --right;
			}
		}

	}
	return res;
    }
};