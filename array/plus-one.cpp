class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

          /*vector<int> res;
          int temp;
        for(int i=0;i<digits.size();i++){
            if(i<digits.size()-1){
                res.push_back(digits[i]);
            }else{
                temp=digits[i]+1;
                if(temp<10){
                    res.push_back(temp);
                }else{
                
                        int divisor=1;
                        while(temp/divisor >=10){
                            divisor*=10;
                        }

                        while(divisor>0){
                            int digit= temp/divisor;
                            res.push_back(digit);

                            temp%=divisor;
                            divisor/=10;
                        }
                     }
                 }
            }  */

            int n=digits.size();

            for(int i = n-1; i >= 0; i--) {

            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};