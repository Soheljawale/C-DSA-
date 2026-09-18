class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    
    // [1,2,3,4]
    // o/p => false

    // [1,2,3,1]
    // o/p => true

    unordered_set <int> set;

    for(int num : nums){
        if(set.count(num)){
            return true;
        }

        set.insert(num);
    }

    return false;

    }
};