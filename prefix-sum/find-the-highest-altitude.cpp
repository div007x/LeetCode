class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int maxAltitude=0;

        for(int num: gain){
            sum+=num;

            if(sum>maxAltitude){
                maxAltitude=sum;
            }
        }
        return maxAltitude;
        
    }
};