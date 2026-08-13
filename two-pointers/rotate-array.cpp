class Solution {
public:

void rotate(int start, int end, vector<int>& nums){
    while(start<=end){
        int temp= nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++;
        end--;
    }
}
    void rotate(vector<int>& nums, int k) {

        int n= nums.size();

        if( k>n){
        k = k%n;
        }

        rotate(0, n-k-1, nums);
        rotate(n-k,n-1,nums);
        rotate(0,n-1,nums);
      
        
    }
};