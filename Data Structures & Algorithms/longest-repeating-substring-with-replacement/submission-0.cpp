class Solution {
public:
    int characterReplacement(string s, int k) {
        int left =0;
        int freq[26]={0};
        int maxfreq=0;
        int maxlength=0;
        for(int right=0;right<s.size();right++){
            freq[s[right]-'A']++;
            maxfreq=max(maxfreq,freq[s[right]-'A']);
            int replacement= (right-left+1)-maxfreq;
            if(replacement>k){
                freq[s[left]-'A']--;
                left++;
            }
           maxlength=max(maxfreq,right-left+1);
        }
        return maxlength;
        

    }
};
