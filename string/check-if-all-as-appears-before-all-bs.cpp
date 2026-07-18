class Solution {
public:
    bool checkString(string s) {
        int n= s.size();

       bool valid= false;

       for(int i=0;i<s.size();i++){
        if(tolower(s[i])=='b'){
            valid= true;
        }else if(valid && tolower(s[i])=='a'){
            return false;
        }


       }

       return true;
    
        
    }
};