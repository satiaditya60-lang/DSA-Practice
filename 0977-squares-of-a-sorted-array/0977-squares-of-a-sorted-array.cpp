class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        int left = 0;
        int right = n-1;

        vector<int> result(n);

        int j = n-1;

        while(left <= right)
        {
            if(abs(nums[left]) > abs(nums[right]))
            {
                result[j] = abs(nums[left]) * abs(nums[left]);
                left++;
            }

            else
            {
                result[j] = abs(nums[right]) * abs(nums[right]);
                right --;
            }

            j--;
        }

        return result;
        
    }
};