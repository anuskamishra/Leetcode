class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++){
            string str=to_string(i);
            if(str.size()%2==0){
            string s1=str.substr(0,str.size()/2);
            string s2=str.substr(str.size()/2);
            int sums1=0,sums2=0;
            for(char ch:s1)sums1+=ch-'0';
            for(char ch:s2)sums2+=ch-'0';
            cnt+=sums1==sums2;
            }
        }
        return cnt;
    }
};