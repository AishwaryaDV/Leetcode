class Solution {
    public boolean isArraySpecial(int[] nums) {
        if(nums.length==1){
            return true;
        }
        int[] temp;
        boolean ans;
        for(int i=0;i<nums.length-1;i++){
                temp= new int[]{nums[i],nums[i+1]};
                ans=specialArray(temp);
                if(ans==false){
                    return false;
                }
            
        }
        return true;
        
    }
    public boolean specialArray(int[] arr){
        int x=arr[0];
        int y=arr[1];
        if(x%2==0 && y%2!=0){
            return true;

        }
        else if(x%2!=0 && y%2==0){
            return true;
        }
        return false;
    }
}