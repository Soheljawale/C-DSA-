class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int, int> frequency;

        for(int num : nums){
            frequency[num]++;

        if(frequency[num] > 1){
            return true;
        

        }
        }
        return false;
        
    }
};
