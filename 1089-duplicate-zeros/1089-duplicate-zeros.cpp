class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        int n = arr.size();
        int zero = 0;

        for(int i = 0; i<n;i++)
        {
            if(arr[i] == 0)
            {
                zero++;
            }
        }

        int l = n-1;
        int r = n+zero-1;

        while(l>=0)
        {
            if(r<n)
            {
                arr[r] = arr[l];
            }

            if(arr[l] == 0)
            {
                r--;

                if(r<n)
                {
                    arr[r] = 0;
                }
            }

            l--;
            r--;
        }
        
    }
};