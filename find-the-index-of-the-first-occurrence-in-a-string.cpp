class Solution {
public:
    int strStr(string haystack, string needle) {
        int len=-1;
        size_t pos=haystack.find(needle);
        if(pos!=string::npos){
          return pos; 
        }
        return -1;
        
    }
};