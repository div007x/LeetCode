class Solution {
public:
    bool checkRecord(string s) {
        int a=0;
        int l=0;
       // int p=0;
        for(char c: s){
            if(c=='A'){
                l=0;
                a++;
        }else if(c=='L'){
            l++;
        }else if(c=='P'){
            l=0;
            continue;
        
        }

        if(a==2){
            return false;
        }
        if(l==3){
            return false;
        }

    }
    return true;        
    }
};