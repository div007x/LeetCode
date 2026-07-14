class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int ans;
        int dup=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(dup==nums[i]){
                ans=dup;
                break;
            }
            dup=nums[i];
        }
       return ans;   
    }

       

};