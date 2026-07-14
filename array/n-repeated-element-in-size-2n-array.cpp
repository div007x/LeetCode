#include<unordered_map>
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i: nums){
            freq[i]++;
        }
        int res;
        for(auto it: freq){
            if(it.second>1){
                return it.first;
                
            }
        }

        return -1;
        
    }
};