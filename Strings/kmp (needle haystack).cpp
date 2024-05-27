class Solution {
public:
void comp_LPS(string&needle,vector<int>&lps,int m){
    lps[0]=0;
    int len=0;
    int i=1;
    while(i<m){
        if(needle[i]==needle[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        vector<int>lps(m);
        comp_LPS(needle,lps,m);
        int i=0;
        int j=0;
        while(i<n){
            if(haystack[i]==needle[j]){
                i++;
                j++;

            }
            if(j==m){
                return i-m;
            }
          else if(i<n and haystack[i]!=needle[j]){
                if(j!=0){
                    j=lps[j-1];
                }
                else{
                    i++;
                }
            }
        }
        return -1;
        
    }
};
