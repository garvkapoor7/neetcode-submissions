class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int start=0;

        int c=0;
        unordered_set<char> window;
        if(s.empty()){
            return 0;
        } // defined the empty set in which we will store the unique elements
        for(int end=0;end<s.size();end++){
            while(window.count(s[end])){
                window.erase(s[start]);
                start++;
            }
            window.insert(s[end]);
            c =max(c,(int)window.size());
        }
        return c;

        
        
                
    }
};
