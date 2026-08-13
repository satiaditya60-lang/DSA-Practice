class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 1;
        int j = 0;

        int k = nums.size();

        while(i<k)
        {
            if(nums[i] != nums[j])
            {
                j++;
                nums[j] = nums[i];
                i++;
            }

            else
            {
                i++;
            }
        }

        return j+1;
    }
};