class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left=0;
        int right=arr.size()-1;
        while(left<right){ //will not be left<=right because they have mentioned that the index should be less than the last element 0 < i < arr.length - 1
            int mid=left+(right-left)/2;
            if(arr[mid]>arr[mid+1]){ //search in left half
                right=mid;
            }
            else{ //search in right half 
                left=mid+1;
            }
        }
        return right;
        
    }
};