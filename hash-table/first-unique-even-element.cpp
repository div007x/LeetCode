class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]==1 && nums[i]%2==0){
                return nums[i];
            }
        }
        return ans;
        
    }
};