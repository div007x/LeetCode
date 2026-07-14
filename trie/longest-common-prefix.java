class Solution {
    public String longestCommonPrefix(String[] strs) {

        if(strs==null || strs.length==0){
            return "";
        }

        int n= strs.length;

       

        String prefix= strs[0];

        for(int i=1;i<n;i++){
            String temp="";

            int m= Math.min(prefix.length(), strs[i].length());

            for(int j=0;j<m;j++){
                if(prefix.charAt(j)==strs[i].charAt(j)){
                    temp+=prefix.charAt(j);
                }else
                    break;
            }
            prefix= temp;

            if(prefix.isEmpty()){
                return "";
            }
        }
        return prefix;
        
    }
}