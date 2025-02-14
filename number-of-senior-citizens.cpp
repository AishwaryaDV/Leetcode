class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(int i=0;i<details.size();i++){
            string passenger=details[i];
            reverse(passenger.begin(),passenger.end());
            string x = string(1, passenger[3]) + string(1, passenger[2]);
            int age=stoi(x);
            if(age>60){
                count++;
            }

        }
        return count;
        
    }
};