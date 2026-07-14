class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(),nums2.end());

        vector<int> res;


        auto it1=s1.begin();
        auto it2= s2.begin();

        while(it1 != s1.end() && it2 !=s2.end()){
            if(*it1==*it2){
                res.push_back(*it1);
               ++it1;
               ++it2;
            }else if(*it1>*it2){
               ++it2;
            }else{
                ++it1;
            }
        }

        
        return res;
    }
};