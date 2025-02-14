class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int mini1=*min_element(nums1.begin(),nums1.end());
        int mini2=*min_element(nums2.begin(),nums2.end());
        vector<int>v;
        unordered_set<int>s(nums1.begin(),nums1.end());
        for(int i=0;i<nums2.size();i++){
            if(s.count(nums2[i])){
                v.push_back(nums2[i]);
            }
        } 
        if(!v.empty()){
            int mini=*min_element(v.begin(),v.end());
            return mini;
        }
        else{
            string c;
            string a=to_string(mini1);
            string b=to_string(mini2);
            int x=stoi(a);
            int y=stoi(b);
            if(x<y){
                c=a+b;
            }
            else{
                c=b+a;
            }
            int ans=stoi(c);
            return ans;
        }
        
    }
};