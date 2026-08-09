class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> res(nums.size());

        int pos=0,neg=1;

        int index=0;



       while(index< nums.size()){

            if(nums[index]>0){
                res[pos]=nums[index];
                pos+=2;
                index++;
            }else if(nums[index]<0){
                res[neg]=nums[index];
                neg+=2;
                index++;
            }
        }

        return res;
        
        
    }
};