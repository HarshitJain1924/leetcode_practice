class Solution {
public:
    int strStr(string haystack, string needle) {
        int nh = haystack.size();
        int nn = needle.size();
        for(int i=0;i<nh;i++)
        {
            int index;
            for(int j=0;j<nn;j++)
            {
                 index =i;
                
                if(haystack[i+j]==needle[j])
                {
                }
                else
                {
                    index=-1;
                    break;
                }
            }
            if(index != -1) {
                return i;  // If match is found, return the starting index
            }
        }
        return -1;
    }
};