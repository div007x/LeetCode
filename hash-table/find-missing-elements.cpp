class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {


        unordered_set<int> s(nums.begin(),nums.end()); 
        vector<int> ans;

        
        int min= *min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());

        for(int i=min;i<=max;i++){
            if(s.count(i)){
                continue;
            }else{
                ans.push_back(i);
            }
        }
        // bool empty=false;
        // for(int i=min;i<=max;i++){
        //     if(find(nums.begin(),nums.end(),i)!=nums.end()){
        //         empty= true;
        //         continue;
        //     }else{
        //         empty=false;
        //         nums.push_back(i);
        //     }
        // }

        //sort(nums.begin(),nums.end());

        return ans;
        
    }
};