class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<s.size();i++){
        //     if(s[i]!=t[i]){
        //         return false;
        //     }
        // }
        // return true;


        vector<int> vec(26,0);

        for(int i=0;i<s.size();i++){
            vec[s[i]-'a']++;
            vec[t[i]-'a']--;

        
        }
        
        for(int i: vec){
            if(i>=1){
                return false;
            }
        }
        return true;
        
    }
};