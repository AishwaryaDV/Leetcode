class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s); //break string into words;
        string str; //to store the word 
        int cnt=0;
        while(ss>>str){
            cout<<str<<endl;
            cnt++;
        }
        return cnt;
        
        
    }
};