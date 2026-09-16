class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int r = 0;
        int w = 0;

        while(r < n)
        {
            if(nums[r] != val)
            {
                nums[w] = nums[r];
                r++;
                w++;
            }
            else
            {
                r++;
            }
        }

        int k = w;
        return k;
        
    }
};