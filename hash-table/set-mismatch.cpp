class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        // int n= nums.size();
        // int actualSum= (n*(n+1)) /2;
        // unordered_set<int> s(nums.begin(),nums.end());

        // int a_sum=0;
        // for(int num:nums){
        //     a_sum+=num;
        // }

        // int uniqueSum=0;
        // for(int i:s){
        //     uniqueSum+=i;
        // }
        // int missing= actualSum-uniqueSum;
        // int dup= a_sum-uniqueSum;

        // return{dup,missing};

        //sort(nums.begin(),nums.end());

        int n=nums.size();

        vector<int> freq(n+1,0);
        int dup= -1;
        int missing= -1;
        for(int i:nums){
            freq[i]++;

            if(freq[i]==2){
                dup=i;
            }

          
        }
        for(int i=1;i<=n;i++){
            if(freq[i]==0){
                missing=i;
                break;
            }
        }
        return {dup,missing};




        
    }
};