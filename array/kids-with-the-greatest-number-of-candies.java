class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {

          int max = Arrays.stream(candies).max().getAsInt();

          int n= candies.length;
          

         List<Boolean> result = new ArrayList<>();

        for(int i =0; i<n;i++){
            if(candies[i] + extraCandies <max){
                result.add(false);
            }else{
                result.add(true);
            }
        }

        return result;
        
    }
}