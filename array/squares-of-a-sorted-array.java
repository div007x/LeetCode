class Solution {
    public int[] sortedSquares(int[] nums) {

        int n = nums.length;
        
        int l=0;
        int r= n-1;

        int[] arr= new int[n];
        int p=n-1;

        while(l<=r){
            int s1= nums[l]*nums[l];
            int s2= nums[r]*nums[r];

            if(s1> s2){
                arr[p--]= s1;
                l++;

            }else{
                arr[p--]= s2;
                r--;
            }
            
        }
        return arr;
    }
}