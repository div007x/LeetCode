#include<numeric>
class Solution {
public:
//gauss summation method
     int missingNumber(vector<int>& nums) {
     int n=nums.size();
    //     int tot=n*(n+1) / 2;
    //     int nsum= accumulate(nums.begin(),nums.end(),0);     //sum of elements invector or array
        
    //     return tot-nsum;
    // 


    //xor method:
    // same elements cancel each elements, missing eement return
    int xr=0;

    for(int i=0;i<=n;i++){           //xor   with range
        xr^=i;
    }
    for(int i=0;i<n;i++){           //XOR with array elements
        xr^=nums[i];
    }
    return xr;



    }
};