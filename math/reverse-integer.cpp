class Solution {
public:
    int reverse(int x) {
        int dig=0;
        int rev=0;
        while(x!=0){
            dig= x%10;
            x/=10;
           
             if(rev > INT_MAX / 10 || 
              (rev == INT_MAX / 10 && x > 7))
                return 0;

            if(rev < INT_MIN / 10 || 
              (rev == INT_MIN / 10 && x< -8))
                return 0;

            rev= rev* 10 + dig;

        }
        return rev;
        
    }
};