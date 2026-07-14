class Solution {
public:
    bool detectCapitalUse(string word) {

        int count=0;
        for(char c:word){
            if(isupper(c)){
                count++;
            }
        }
        if(count==word.size() || count==0) return true;
        if(count==1 && isupper(word[0])) return true;


        return false;



        // int lcount=0;
        // int ucount=0;
        // bool first=false;
        // for(){
        //     if(isupper(word[i])){
        //         ucount++;
        //         first=true;
        //     }else if(islower(word[i])){
        //         lcount++;
        //         first=true;
        //     }else if(i==0 && isupper(word[i])){
        //         first=false;
        //     }
        // }
        // if(ucount== word.size() || lcount==word.size() || !first){
        //     return true;
        // }else
        //     return false;
        
    }
};