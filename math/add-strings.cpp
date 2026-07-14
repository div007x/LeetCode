class Solution {
public:
    string addStrings(string num1, string num2) {
        string res="";

        int l1=num1.size()-1;
        int l2=num2.size()-1;

        int carry=0;
        //int sum=0;

        while(l1>=0 || l2>=0 || carry){
            int sum=carry;

           if(l1>=0) sum+=num1[l1--]- '0';
           if(l2>=0)sum+=num2[l2--]- '0';

            res.push_back(sum%10 +'0');
            carry= sum/10;
        }
        reverse(res.begin(),res.end());
        return res;


        
        
    }
};