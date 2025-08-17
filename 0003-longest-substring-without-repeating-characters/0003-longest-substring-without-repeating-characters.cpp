class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
        if(s == " "){
            return 1;
        }
        if(s.size()==1){
            return 1;
        }
        int maxans = INT_MIN;
        for(int i=0; i<s.length(); i++){
           unordered_set <int> set;
           for(int j=i; j<s.length(); j++){
            if(set.find(s[j]) != set.end()){
                maxans = max(maxans, j-i);
                break;
            }
            set.insert(s[j]);
           }
           maxans = max(maxans, (int)set.size());
        }
        return maxans;
    }
};