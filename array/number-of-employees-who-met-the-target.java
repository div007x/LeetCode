class Solution {
    public int numberOfEmployeesWhoMetTarget(int[] hours, int target) {

        int i=0;
        int count=0;
        while(i< hours.length){
            if(hours[i]>=target){
                count++;
            }
            i++;

        }
        return count;
    }
}