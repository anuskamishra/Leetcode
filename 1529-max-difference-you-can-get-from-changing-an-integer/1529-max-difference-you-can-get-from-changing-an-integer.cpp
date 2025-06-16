class Solution {
public:
    int maxDiff(int num) {
        vector<int> digits;
        int n = num;
        while(n>0)
        {
            digits.push_back(n%10);
            n/=10;
        }
        int max = 0;
        int min = 0;
        int i=digits.size()-1;
        for(;i>=0 && (digits[i]<=1); --i)
        {
            min = min*10 + digits[i];
        }
        if(i>=0)
        {
            min = min*10;
            if(i==digits.size()-1)
            {
                min++;
            }
        }
        for(int j=i-1 ;j>=0; --j)
        {
            min = min*10;
            if(digits[i]!=digits[j])
            {
                min += digits[j];
            }
            else
            {
                if(i==digits.size()-1)
                {
                    min+=1;
                }
            }
        }
        int j = digits.size()-1;
        for(;j>=0 && digits[j]==9; --j)
        {
            max = max*10 + digits[j];
        }
        if(j<0)
        {
            return max-min;
        }
        max = max*10+9;
        for(int i=j-1; i>=0; --i)
        {
            max *= 10;
            if(digits[i]==digits[j])
            {
                max += 9;
            }
            else
            {
                max += digits[i];
            }
        }
        cout << max << " " << min << endl;
        return max-min;
    }
};