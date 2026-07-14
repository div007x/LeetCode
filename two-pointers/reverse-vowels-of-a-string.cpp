class Solution {
public:

    bool isvowel(char c){
        c= tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            while(left<right && !isvowel(s[left])){
                left++;
            }
            while(left<right && !isvowel(s[right])){
                right--;
            }

                char temp=s[left];
                s[left]=s[right];

                s[right]=temp;

                left++;
                right--;
            
        }
        return s;
    }
};