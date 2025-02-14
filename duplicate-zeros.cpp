class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>buffer;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                buffer.push_back(arr[i]);
            }
            else if(arr[i]==0){
                buffer.push_back(0);
                buffer.push_back(0);
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=buffer[i];
        }
        
    }
};