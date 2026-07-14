class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num(nums1.size() + nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(), num.begin());
        
        int s= num.size();
        double res ;       
        if(s%2==0){
            res=(double(num[s/2]) + double(num[s/2 -1])) / 2;
        }else{
            res= num[s/2];
        }
        return res;

        // int i,j=0;
        // int prev,curr=0;
        // int n= nums1.size() + nums2.size();
        // for(int k=0;k<=n;k++){
        //     prev=curr;

        //     if(i<n)
        // }
    }
};