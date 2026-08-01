class Solution {
public:

    void mergesort(vector<int>& nums, int left,int right){

        if(left>=right){
            return;
        }

        int mid = left+ (right-left)/2;

        mergesort(nums,left,mid);

        mergesort(nums,mid+1,right);


        vector<int> temp;

        int i = left;
        int j = mid + 1;

        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j])
                temp.push_back(nums[i++]);
            else
                temp.push_back(nums[j++]);
        }

        while (i <= mid){
            temp.push_back(nums[i++]);
        }

        while (j <= right){
            temp.push_back(nums[j++]);
        }
        for (int k = 0; k < temp.size(); k++){
            nums[left + k] = temp[k];
        }

    }



    vector<int> targetIndices(vector<int>& nums, int target) {

        mergesort(nums,0, nums.size()-1);
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                res.push_back(i);
            }
        }


        return res;
        
    }
};

// class Solution {
// public:

//     void mergesort(vector<int>& arr, int left, int right) {

//         if (left >= right)
//             return;

//         int mid = left + (right - left) / 2;

       
//         mergesort(arr, left, mid);
//         mergesort(arr, mid + 1, right);

//         vector<int> temp;

//         int i = left;
//         int j = mid + 1;

//         while (i <= mid && j <= right) {
//             if (arr[i] <= arr[j])
//                 temp.push_back(arr[i++]);
//             else
//                 temp.push_back(arr[j++]);
//         }

//         while (i <= mid)
//             temp.push_back(arr[i++]);

//         while (j <= right)
//             temp.push_back(arr[j++]);

//         for (int k = 0; k < temp.size(); k++)
//             arr[left + k] = temp[k];
//     }

//     vector<int> targetIndices(vector<int>& nums, int target) {

//         mergesort(nums, 0, nums.size() - 1);

//         vector<int> res;

       
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] == target)
//                 res.push_back(i);
//         }

//         return res;
//     }
// };