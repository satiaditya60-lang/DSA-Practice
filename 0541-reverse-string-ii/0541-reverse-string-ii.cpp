class Solution {
public:
    string reverseStr(string s, int k) {

        int n = s.length();

        for(int i = 0; i<n; i=i+2*k)
        {
            int l = i;
            int r = i+k-1;

            if(r>=n)
            {
                r = n-1;
            }

            while(l < r)
            {
                swap(s[l],s[r]);

                l++;
                r--; 
            }
        }

        return s;
        
    }
};