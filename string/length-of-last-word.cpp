class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count=0;
        for(int i= s.length()-1;i>=0;i--){
            if(s[i]==' '){
                if(count==0){
                    continue;
                }
                else {
                    return count;
                }
            }else{
                count++;
            }

            // }else if(isalpha(s[i]) && s[i]!=''){
            //     count++;
            // }
            // }else if(s[i]==' ' && count>=1){
            //     break;
            // }
        }


        return count;
        
    }
};