class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l=min(word1.size(),word2.size());
        int m=max(word1.size(),word2.size());
        string ans="";
        int count =0;
        for(int i=0;i<2*l;i++){
            if(i%2==0){
                ans+=word1[0];
                word1.erase(0,1);
            }
            else{
                ans+=word2[0];
                word2.erase(0,1);
            }
        }
        return ans+word1+word2;
    }
};