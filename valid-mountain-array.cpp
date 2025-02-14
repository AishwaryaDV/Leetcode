class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int maxi=*max_element(arr.begin(),arr.end());
        int index;

        for(int i=0;i<arr.size();i++){
            if(arr[i]==maxi){
                index=i;
                break;
            }
        }
        
        if(arr.size()<3 || index==arr.size()-1 || index==0){
            return false;
        }

        for(int i=0;i<index-1;i++){
            if(arr[i]<arr[i+1]){
                continue;
            }
            else if(arr[i]==arr[i+1]){
                return false;
                break;
            }
            else{
                return false;
                break;
            }
        }
        for(int i=index;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                continue;
            }
            else if(arr[i]==arr[i+1]){
                return false;
                break;
            }
            else{
                return false;
                break;
            }
        }
        return true;
        
    }
};