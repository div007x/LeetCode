class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> freq;
        for(char c:s){
            freq[c]++;
        }
        //char res;
        for(char n: t){
            freq[n]--;
            if(freq[n]<0){
                return n;
            }
           
        }
       
        return ' ';
    }
};