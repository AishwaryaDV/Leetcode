class Solution {
    public String clearDigits(String s) {
        StringBuilder sb= new StringBuilder(s);
        for(int i=0;i<sb.length();i++){
            char ch=sb.charAt(i);
            if(Character.isDigit(ch)){
                if(i>0){
                    sb.deleteCharAt(i-1);
                    i--;
                }
                sb.deleteCharAt(i);
                i--;
            }
        }
        return sb.toString();
        
    }
}