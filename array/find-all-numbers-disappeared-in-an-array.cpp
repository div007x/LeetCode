class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int > ans;

        for(int i=0;i<nums.size();i++){
            int number= abs(nums[i]);
            int index= number-1;

            if(nums[index]>0){
                nums[index]= -nums[index];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
        
    }
};