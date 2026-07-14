class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j,k;
        vector<int> temp(m+n);
        i=j=0;
        k=0;
        while(i<m && j<n){

            if(nums1[i]<nums2[j]){
                temp[k]=nums1[i];
                k++;
                i++;
            }else{
                temp[k]=nums2[j];
                k++;
                j++;
            }
        }

            while(i<m){
                temp[k]=nums1[i];
                k++;
                i++;
            }
            while(j<n){
                temp[k]=nums2[j];
                k++;
                j++;
            }
            
            for(int i=0;i<n+m;i++){
                nums1[i]=temp[i];
            }

        
        
    }
};