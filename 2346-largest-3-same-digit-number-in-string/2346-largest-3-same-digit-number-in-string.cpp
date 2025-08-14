class Solution {
public:
    string largestGoodInteger(string num) {
        if(num.length()<3) return "";
        string res = "";
        string temp = "";
        for(int i = 1; i<num.length()-1; i++){
            if(num[i]==num[i-1] && num[i]==num[i+1]){
                temp.push_back(num[i]);
                temp.push_back(num[i]);
                temp.push_back(num[i]);
                if(res.compare(temp)<0){
                    res = temp;
                }
                temp = "";
            }
        }
        return res;
    }
};