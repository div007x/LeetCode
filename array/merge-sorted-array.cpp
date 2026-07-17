class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {


        int p1 = m-1;
        int p2= n-1;
        int p = m+n -1;


        while(p1>=0 && p2>=0){
            if(nums1[p1]> nums2[p2]){
                nums1[p--]= nums1[p1];
                p1--;
            }else {
                nums1[p--]= nums2[p2];
                p2--;
            }
        }

        while(p2>=0){
            nums1[p--]= nums2[p2--];
        }
        // int i,j,k;
        // vector<int> temp(m+n);
        // i=j=0;
        // k=0;
        // while(i<m && j<n){

        //     if(nums1[i]<nums2[j]){
        //         temp[k]=nums1[i];
        //         k++;
        //         i++;
        //     }else{
        //         temp[k]=nums2[j];
        //         k++;
        //         j++;
        //     }
        // }

        //     while(i<m){
        //         temp[k]=nums1[i];
        //         k++;
        //         i++;
        //     }
        //     while(j<n){
        //         temp[k]=nums2[j];
        //         k++;
        //         j++;
        //     }
            
        //     for(int i=0;i<n+m;i++){
        //         nums1[i]=temp[i];
        //     }

     
        
    }
};