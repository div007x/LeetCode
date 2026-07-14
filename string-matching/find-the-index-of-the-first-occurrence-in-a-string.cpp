class Solution {
public:
    int strStr(string haystack, string needle) {

        int x=haystack.length();
        int y=needle.length();
        for(int i=0;i<=x-y;i++){
            if(haystack.substr(i,y)==needle){
                return i;
                return 0;
            }
            
            }
        return -1;
    
    }
};