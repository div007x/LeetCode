class Solution {
public:
    bool isPalindrome(string s) {
       // vector<char> str;
        // for(char c:s){
        //     c=tolower(c);
        //     if(isalnum(c)){
        //         str.push_back(c);
        //     }
        // }
        int n=s.size();
        int left=0;
        int right=n-1;
       
        while(left<right){
            if(!isalnum(s[right])){
                right--;
                continue;
            }else if(!isalnum(s[left])){
                left++;
                continue;
            }else{
                if(tolower(s[left])!= tolower(s[right])){
                    return false;
                }
            left++;
            right--;
            }
            
         }
    return true;
    }
};
