class Solution {
public:
    string shortestPalindrome(string s) {
        string str=s;
        reverse(str.begin(),str.end());
        str=s+'$'+str;
        int len=0;
        int size=str.size();
        vector<int>lps(size,0);
        int i=1;
        while(i<size){
            if(str[i]==str[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0){
                   len= lps[len-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        int lens=lps[size-1];
        str=s.substr(lens,s.size());
        reverse(str.begin(),str.end());
        return str+s;


        
    }
};
