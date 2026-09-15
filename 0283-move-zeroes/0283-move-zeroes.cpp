class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        int r = 0;
        int w = 0;

        for(int i = r; i<n; i++)
        {
            if(nums[i] != 0)
            {
                nums[w] = nums[i];
                w++;
            }

        }

        for(int i = w; i<n;i++)
        {
            nums[i] = 0;
        }

    }
};